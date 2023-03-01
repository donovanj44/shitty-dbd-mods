// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HalloweenEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalloweenEventComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHalloweenEventComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHalloweenEventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USectionnedChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UHalloweenEventComponent::execGetVial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USectionnedChargeableComponent**)Z_Param__Result=P_THIS->GetVial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalloweenEventComponent::execIsVialFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVialFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalloweenEventComponent::execOnFinishedPlaying)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlaying(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalloweenEventComponent::execOnRep_Vial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Vial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalloweenEventComponent::execServer_SpawnVial)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_initialCharge);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SpawnVial_Validate(Z_Param_initialCharge))
		{
			RPC_ValidateFailed(TEXT("Server_SpawnVial_Validate"));
			return;
		}
		P_THIS->Server_SpawnVial_Implementation(Z_Param_initialCharge);
		P_NATIVE_END;
	}
	static FName NAME_UHalloweenEventComponent_Server_SpawnVial = FName(TEXT("Server_SpawnVial"));
	void UHalloweenEventComponent::Server_SpawnVial(float initialCharge)
	{
		HalloweenEventComponent_eventServer_SpawnVial_Parms Parms;
		Parms.initialCharge=initialCharge;
		ProcessEvent(FindFunctionChecked(NAME_UHalloweenEventComponent_Server_SpawnVial),&Parms);
	}
	void UHalloweenEventComponent::StaticRegisterNativesUHalloweenEventComponent()
	{
		UClass* Class = UHalloweenEventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVial", &UHalloweenEventComponent::execGetVial },
			{ "IsVialFull", &UHalloweenEventComponent::execIsVialFull },
			{ "OnFinishedPlaying", &UHalloweenEventComponent::execOnFinishedPlaying },
			{ "OnRep_Vial", &UHalloweenEventComponent::execOnRep_Vial },
			{ "Server_SpawnVial", &UHalloweenEventComponent::execServer_SpawnVial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics
	{
		struct HalloweenEventComponent_eventGetVial_Parms
		{
			USectionnedChargeableComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalloweenEventComponent_eventGetVial_Parms, ReturnValue), Z_Construct_UClass_USectionnedChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalloweenEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalloweenEventComponent, nullptr, "GetVial", nullptr, nullptr, sizeof(HalloweenEventComponent_eventGetVial_Parms), Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalloweenEventComponent_GetVial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalloweenEventComponent_GetVial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics
	{
		struct HalloweenEventComponent_eventIsVialFull_Parms
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
	void Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HalloweenEventComponent_eventIsVialFull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HalloweenEventComponent_eventIsVialFull_Parms), &Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalloweenEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalloweenEventComponent, nullptr, "IsVialFull", nullptr, nullptr, sizeof(HalloweenEventComponent_eventIsVialFull_Parms), Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics
	{
		struct HalloweenEventComponent_eventOnFinishedPlaying_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalloweenEventComponent_eventOnFinishedPlaying_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalloweenEventComponent_eventOnFinishedPlaying_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalloweenEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalloweenEventComponent, nullptr, "OnFinishedPlaying", nullptr, nullptr, sizeof(HalloweenEventComponent_eventOnFinishedPlaying_Parms), Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalloweenEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalloweenEventComponent, nullptr, "OnRep_Vial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::NewProp_initialCharge = { "initialCharge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalloweenEventComponent_eventServer_SpawnVial_Parms, initialCharge), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::NewProp_initialCharge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalloweenEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalloweenEventComponent, nullptr, "Server_SpawnVial", nullptr, nullptr, sizeof(HalloweenEventComponent_eventServer_SpawnVial_Parms), Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHalloweenEventComponent_NoRegister()
	{
		return UHalloweenEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHalloweenEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__toxinVialComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__toxinVialComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHalloweenEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHalloweenEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHalloweenEventComponent_GetVial, "GetVial" }, // 2951420338
		{ &Z_Construct_UFunction_UHalloweenEventComponent_IsVialFull, "IsVialFull" }, // 3882427731
		{ &Z_Construct_UFunction_UHalloweenEventComponent_OnFinishedPlaying, "OnFinishedPlaying" }, // 3753135769
		{ &Z_Construct_UFunction_UHalloweenEventComponent_OnRep_Vial, "OnRep_Vial" }, // 852223481
		{ &Z_Construct_UFunction_UHalloweenEventComponent_Server_SpawnVial, "Server_SpawnVial" }, // 1099649384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalloweenEventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HalloweenEventComponent.h" },
		{ "ModuleRelativePath", "Public/HalloweenEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalloweenEventComponent_Statics::NewProp__toxinVialComponent_MetaData[] = {
		{ "Category", "HalloweenEventComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HalloweenEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHalloweenEventComponent_Statics::NewProp__toxinVialComponent = { "_toxinVialComponent", "OnRep_Vial", (EPropertyFlags)0x00400001000a0029, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalloweenEventComponent, _toxinVialComponent), Z_Construct_UClass_USectionnedChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHalloweenEventComponent_Statics::NewProp__toxinVialComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalloweenEventComponent_Statics::NewProp__toxinVialComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHalloweenEventComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalloweenEventComponent_Statics::NewProp__toxinVialComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHalloweenEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHalloweenEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHalloweenEventComponent_Statics::ClassParams = {
		&UHalloweenEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHalloweenEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHalloweenEventComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHalloweenEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHalloweenEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHalloweenEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHalloweenEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHalloweenEventComponent, 2638638635);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHalloweenEventComponent>()
	{
		return UHalloweenEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHalloweenEventComponent(Z_Construct_UClass_UHalloweenEventComponent, &UHalloweenEventComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHalloweenEventComponent"), false, nullptr, nullptr, nullptr);

	void UHalloweenEventComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__toxinVialComponent(TEXT("_toxinVialComponent"));

		const bool bIsValid = true
			&& Name__toxinVialComponent == ClassReps[(int32)ENetFields_Private::_toxinVialComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHalloweenEventComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHalloweenEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
