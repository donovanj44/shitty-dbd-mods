// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/SurvivorContaminationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorContaminationComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_USurvivorContaminationComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_USurvivorContaminationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EContaminator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorStatusInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorContaminationComponent::execIsContaminated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContaminated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorContaminationComponent::execMulticast_OnContaminated_Cosmetic)
	{
		P_GET_ENUM(EContaminator,Z_Param_contaminator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnContaminated_Cosmetic_Implementation(EContaminator(Z_Param_contaminator));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorContaminationComponent::execOnRep_InjectSerumInteractions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InjectSerumInteractions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorContaminationComponent::execOnRep_IsContaminated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsContaminated();
		P_NATIVE_END;
	}
	static FName NAME_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic = FName(TEXT("Multicast_OnContaminated_Cosmetic"));
	void USurvivorContaminationComponent::Multicast_OnContaminated_Cosmetic(EContaminator contaminator)
	{
		SurvivorContaminationComponent_eventMulticast_OnContaminated_Cosmetic_Parms Parms;
		Parms.contaminator=contaminator;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic),&Parms);
	}
	static FName NAME_USurvivorContaminationComponent_OnContaminated_Cosmetic = FName(TEXT("OnContaminated_Cosmetic"));
	void USurvivorContaminationComponent::OnContaminated_Cosmetic(EContaminator contaminator)
	{
		SurvivorContaminationComponent_eventOnContaminated_Cosmetic_Parms Parms;
		Parms.contaminator=contaminator;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorContaminationComponent_OnContaminated_Cosmetic),&Parms);
	}
	static FName NAME_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic = FName(TEXT("OnContaminated_SFX_Stinger_Cosmetic"));
	void USurvivorContaminationComponent::OnContaminated_SFX_Stinger_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic),NULL);
	}
	static FName NAME_USurvivorContaminationComponent_OnContaminationCured_Cosmetic = FName(TEXT("OnContaminationCured_Cosmetic"));
	void USurvivorContaminationComponent::OnContaminationCured_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorContaminationComponent_OnContaminationCured_Cosmetic),NULL);
	}
	void USurvivorContaminationComponent::StaticRegisterNativesUSurvivorContaminationComponent()
	{
		UClass* Class = USurvivorContaminationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsContaminated", &USurvivorContaminationComponent::execIsContaminated },
			{ "Multicast_OnContaminated_Cosmetic", &USurvivorContaminationComponent::execMulticast_OnContaminated_Cosmetic },
			{ "OnRep_InjectSerumInteractions", &USurvivorContaminationComponent::execOnRep_InjectSerumInteractions },
			{ "OnRep_IsContaminated", &USurvivorContaminationComponent::execOnRep_IsContaminated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics
	{
		struct SurvivorContaminationComponent_eventIsContaminated_Parms
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
	void Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorContaminationComponent_eventIsContaminated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorContaminationComponent_eventIsContaminated_Parms), &Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorContaminationComponent, nullptr, "IsContaminated", nullptr, nullptr, sizeof(SurvivorContaminationComponent_eventIsContaminated_Parms), Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_contaminator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_contaminator_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::NewProp_contaminator = { "contaminator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorContaminationComponent_eventMulticast_OnContaminated_Cosmetic_Parms, contaminator), Z_Construct_UEnum_TheK24_EContaminator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::NewProp_contaminator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::NewProp_contaminator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::NewProp_contaminator_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorContaminationComponent, nullptr, "Multicast_OnContaminated_Cosmetic", nullptr, nullptr, sizeof(SurvivorContaminationComponent_eventMulticast_OnContaminated_Cosmetic_Parms), Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_contaminator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_contaminator_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::NewProp_contaminator = { "contaminator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorContaminationComponent_eventOnContaminated_Cosmetic_Parms, contaminator), Z_Construct_UEnum_TheK24_EContaminator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::NewProp_contaminator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::NewProp_contaminator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::NewProp_contaminator_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorContaminationComponent, nullptr, "OnContaminated_Cosmetic", nullptr, nullptr, sizeof(SurvivorContaminationComponent_eventOnContaminated_Cosmetic_Parms), Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorContaminationComponent, nullptr, "OnContaminated_SFX_Stinger_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorContaminationComponent, nullptr, "OnContaminationCured_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorContaminationComponent, nullptr, "OnRep_InjectSerumInteractions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorContaminationComponent, nullptr, "OnRep_IsContaminated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorContaminationComponent_NoRegister()
	{
		return USurvivorContaminationComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorContaminationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__injectSerumInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__injectSerumInteractions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__injectSerumInteractions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__injectSerumInteractionsClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__injectSerumInteractionsClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__injectSerumInteractionsClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contaminationHinderedValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__contaminationHinderedValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contaminationHinderedSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__contaminationHinderedSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__injectSerumSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__injectSerumSecondsToCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__injectSerumChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__injectSerumChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isContaminated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isContaminated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorContaminationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorContaminationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorContaminationComponent_IsContaminated, "IsContaminated" }, // 1547732175
		{ &Z_Construct_UFunction_USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic, "Multicast_OnContaminated_Cosmetic" }, // 539443106
		{ &Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_Cosmetic, "OnContaminated_Cosmetic" }, // 3137051284
		{ &Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic, "OnContaminated_SFX_Stinger_Cosmetic" }, // 1683923121
		{ &Z_Construct_UFunction_USurvivorContaminationComponent_OnContaminationCured_Cosmetic, "OnContaminationCured_Cosmetic" }, // 4011947480
		{ &Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_InjectSerumInteractions, "OnRep_InjectSerumInteractions" }, // 1181352808
		{ &Z_Construct_UFunction_USurvivorContaminationComponent_OnRep_IsContaminated, "OnRep_IsContaminated" }, // 3226569048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SurvivorContaminationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractions = { "_injectSerumInteractions", "OnRep_InjectSerumInteractions", (EPropertyFlags)0x0040008100002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumInteractions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractions_Inner = { "_injectSerumInteractions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractionsClasses_MetaData[] = {
		{ "Category", "SurvivorContaminationComponent" },
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractionsClasses = { "_injectSerumInteractionsClasses", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumInteractionsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractionsClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractionsClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractionsClasses_Inner = { "_injectSerumInteractionsClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedValue_MetaData[] = {
		{ "Category", "SurvivorContaminationComponent" },
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedValue = { "_contaminationHinderedValue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorContaminationComponent, _contaminationHinderedValue), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedSeconds_MetaData[] = {
		{ "Category", "SurvivorContaminationComponent" },
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedSeconds = { "_contaminationHinderedSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorContaminationComponent, _contaminationHinderedSeconds), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumSecondsToCharge_MetaData[] = {
		{ "Category", "SurvivorContaminationComponent" },
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumSecondsToCharge = { "_injectSerumSecondsToCharge", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumSecondsToCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumChargeable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumChargeable = { "_injectSerumChargeable", nullptr, (EPropertyFlags)0x0040000000082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__isContaminated_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorContaminationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__isContaminated = { "_isContaminated", "OnRep_IsContaminated", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorContaminationComponent, _isContaminated), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__isContaminated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__isContaminated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorContaminationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractionsClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumInteractionsClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__contaminationHinderedSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumSecondsToCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__injectSerumChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorContaminationComponent_Statics::NewProp__isContaminated,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USurvivorStatusInterface_NoRegister, (int32)VTABLE_OFFSET(USurvivorContaminationComponent, ISurvivorStatusInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorContaminationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorContaminationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorContaminationComponent_Statics::ClassParams = {
		&USurvivorContaminationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorContaminationComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorContaminationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorContaminationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorContaminationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorContaminationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorContaminationComponent, 2609607505);
	template<> THEK24_API UClass* StaticClass<USurvivorContaminationComponent>()
	{
		return USurvivorContaminationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorContaminationComponent(Z_Construct_UClass_USurvivorContaminationComponent, &USurvivorContaminationComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("USurvivorContaminationComponent"), false, nullptr, nullptr, nullptr);

	void USurvivorContaminationComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isContaminated(TEXT("_isContaminated"));
		static const FName Name__injectSerumChargeable(TEXT("_injectSerumChargeable"));
		static const FName Name__injectSerumInteractions(TEXT("_injectSerumInteractions"));

		const bool bIsValid = true
			&& Name__isContaminated == ClassReps[(int32)ENetFields_Private::_isContaminated].Property->GetFName()
			&& Name__injectSerumChargeable == ClassReps[(int32)ENetFields_Private::_injectSerumChargeable].Property->GetFName()
			&& Name__injectSerumInteractions == ClassReps[(int32)ENetFields_Private::_injectSerumInteractions].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USurvivorContaminationComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorContaminationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
