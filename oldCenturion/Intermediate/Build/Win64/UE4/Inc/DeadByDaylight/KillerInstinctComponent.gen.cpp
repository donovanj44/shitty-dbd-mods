// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerInstinctComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerInstinctComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerInstinctComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerInstinctComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomKillerInstinctData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UKillerInstinctComponent::execGetParticleSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=P_THIS->GetParticleSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerInstinctComponent::execIsOwnerInKillerInstinctRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOwnerInKillerInstinctRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerInstinctComponent::execOnKillerLocallyObservedChanged)
	{
		P_GET_UBOOL(Z_Param_locallyObserved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerLocallyObservedChanged(Z_Param_locallyObserved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerInstinctComponent::execSetParticleSystem)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_particleSystemComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParticleSystem(Z_Param_particleSystemComponent);
		P_NATIVE_END;
	}
	void UKillerInstinctComponent::StaticRegisterNativesUKillerInstinctComponent()
	{
		UClass* Class = UKillerInstinctComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParticleSystem", &UKillerInstinctComponent::execGetParticleSystem },
			{ "IsOwnerInKillerInstinctRadius", &UKillerInstinctComponent::execIsOwnerInKillerInstinctRadius },
			{ "OnKillerLocallyObservedChanged", &UKillerInstinctComponent::execOnKillerLocallyObservedChanged },
			{ "SetParticleSystem", &UKillerInstinctComponent::execSetParticleSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics
	{
		struct KillerInstinctComponent_eventGetParticleSystem_Parms
		{
			UNiagaraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerInstinctComponent_eventGetParticleSystem_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerInstinctComponent, nullptr, "GetParticleSystem", nullptr, nullptr, sizeof(KillerInstinctComponent_eventGetParticleSystem_Parms), Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics
	{
		struct KillerInstinctComponent_eventIsOwnerInKillerInstinctRadius_Parms
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
	void Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KillerInstinctComponent_eventIsOwnerInKillerInstinctRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerInstinctComponent_eventIsOwnerInKillerInstinctRadius_Parms), &Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerInstinctComponent, nullptr, "IsOwnerInKillerInstinctRadius", nullptr, nullptr, sizeof(KillerInstinctComponent_eventIsOwnerInKillerInstinctRadius_Parms), Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics
	{
		struct KillerInstinctComponent_eventOnKillerLocallyObservedChanged_Parms
		{
			bool locallyObserved;
		};
		static void NewProp_locallyObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locallyObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit(void* Obj)
	{
		((KillerInstinctComponent_eventOnKillerLocallyObservedChanged_Parms*)Obj)->locallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved = { "locallyObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerInstinctComponent_eventOnKillerLocallyObservedChanged_Parms), &Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::NewProp_locallyObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerInstinctComponent, nullptr, "OnKillerLocallyObservedChanged", nullptr, nullptr, sizeof(KillerInstinctComponent_eventOnKillerLocallyObservedChanged_Parms), Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics
	{
		struct KillerInstinctComponent_eventSetParticleSystem_Parms
		{
			UNiagaraComponent* particleSystemComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particleSystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::NewProp_particleSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::NewProp_particleSystemComponent = { "particleSystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerInstinctComponent_eventSetParticleSystem_Parms, particleSystemComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::NewProp_particleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::NewProp_particleSystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::NewProp_particleSystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerInstinctComponent, nullptr, "SetParticleSystem", nullptr, nullptr, sizeof(KillerInstinctComponent_eventSetParticleSystem_Parms), Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerInstinctComponent_NoRegister()
	{
		return UKillerInstinctComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerInstinctComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentKillerInstinctData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentKillerInstinctData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customKillerInstinctData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__customKillerInstinctData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__customKillerInstinctData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperHighlightColorOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__camperHighlightColorOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__particleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__particleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultKillerInstinctAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__defaultKillerInstinctAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerInstinctComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerInstinctComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerInstinctComponent_GetParticleSystem, "GetParticleSystem" }, // 307288114
		{ &Z_Construct_UFunction_UKillerInstinctComponent_IsOwnerInKillerInstinctRadius, "IsOwnerInKillerInstinctRadius" }, // 4063722681
		{ &Z_Construct_UFunction_UKillerInstinctComponent_OnKillerLocallyObservedChanged, "OnKillerLocallyObservedChanged" }, // 36096550
		{ &Z_Construct_UFunction_UKillerInstinctComponent_SetParticleSystem, "SetParticleSystem" }, // 3623037700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerInstinctComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KillerInstinctComponent.h" },
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__currentKillerInstinctData_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__currentKillerInstinctData = { "_currentKillerInstinctData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerInstinctComponent, _currentKillerInstinctData), Z_Construct_UScriptStruct_FCustomKillerInstinctData, METADATA_PARAMS(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__currentKillerInstinctData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__currentKillerInstinctData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__customKillerInstinctData_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__customKillerInstinctData = { "_customKillerInstinctData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerInstinctComponent, _customKillerInstinctData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__customKillerInstinctData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__customKillerInstinctData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__customKillerInstinctData_Inner = { "_customKillerInstinctData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomKillerInstinctData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__camperHighlightColorOverride_MetaData[] = {
		{ "Category", "KillerInstinctComponent" },
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__camperHighlightColorOverride = { "_camperHighlightColorOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerInstinctComponent, _camperHighlightColorOverride), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__camperHighlightColorOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__camperHighlightColorOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__particleSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__particleSystemComponent = { "_particleSystemComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerInstinctComponent, _particleSystemComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__particleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__particleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__defaultKillerInstinctAsset_MetaData[] = {
		{ "Category", "KillerInstinctComponent" },
		{ "ModuleRelativePath", "Public/KillerInstinctComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__defaultKillerInstinctAsset = { "_defaultKillerInstinctAsset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerInstinctComponent, _defaultKillerInstinctAsset), Z_Construct_UScriptStruct_FCustomKillerInstinctData, METADATA_PARAMS(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__defaultKillerInstinctAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__defaultKillerInstinctAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerInstinctComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__currentKillerInstinctData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__customKillerInstinctData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__customKillerInstinctData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__camperHighlightColorOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__particleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerInstinctComponent_Statics::NewProp__defaultKillerInstinctAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerInstinctComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerInstinctComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerInstinctComponent_Statics::ClassParams = {
		&UKillerInstinctComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillerInstinctComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerInstinctComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerInstinctComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerInstinctComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerInstinctComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerInstinctComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerInstinctComponent, 184074747);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerInstinctComponent>()
	{
		return UKillerInstinctComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerInstinctComponent(Z_Construct_UClass_UKillerInstinctComponent, &UKillerInstinctComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerInstinctComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerInstinctComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
