// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PortalTargetingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalTargetingComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalTargetingComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalTargetingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPortalTargetingComponent::execGetTargetedPortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADemogorgonPortal**)Z_Param__Result=P_THIS->GetTargetedPortal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalTargetingComponent::execMulticast_SetTargetedPortal)
	{
		P_GET_OBJECT(ADemogorgonPortal,Z_Param_targetedPortal);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_SetTargetedPortal_Validate(Z_Param_targetedPortal))
		{
			RPC_ValidateFailed(TEXT("Multicast_SetTargetedPortal_Validate"));
			return;
		}
		P_THIS->Multicast_SetTargetedPortal_Implementation(Z_Param_targetedPortal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalTargetingComponent::execServer_SetTargetedPortal)
	{
		P_GET_OBJECT(ADemogorgonPortal,Z_Param_targetedPortal);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetTargetedPortal_Validate(Z_Param_targetedPortal))
		{
			RPC_ValidateFailed(TEXT("Server_SetTargetedPortal_Validate"));
			return;
		}
		P_THIS->Server_SetTargetedPortal_Implementation(Z_Param_targetedPortal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalTargetingComponent::execSetIsPorting)
	{
		P_GET_UBOOL(Z_Param_isPorting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPorting(Z_Param_isPorting);
		P_NATIVE_END;
	}
	static FName NAME_UPortalTargetingComponent_Multicast_SetTargetedPortal = FName(TEXT("Multicast_SetTargetedPortal"));
	void UPortalTargetingComponent::Multicast_SetTargetedPortal(ADemogorgonPortal* targetedPortal)
	{
		PortalTargetingComponent_eventMulticast_SetTargetedPortal_Parms Parms;
		Parms.targetedPortal=targetedPortal;
		ProcessEvent(FindFunctionChecked(NAME_UPortalTargetingComponent_Multicast_SetTargetedPortal),&Parms);
	}
	static FName NAME_UPortalTargetingComponent_Server_SetTargetedPortal = FName(TEXT("Server_SetTargetedPortal"));
	void UPortalTargetingComponent::Server_SetTargetedPortal(ADemogorgonPortal* targetedPortal)
	{
		PortalTargetingComponent_eventServer_SetTargetedPortal_Parms Parms;
		Parms.targetedPortal=targetedPortal;
		ProcessEvent(FindFunctionChecked(NAME_UPortalTargetingComponent_Server_SetTargetedPortal),&Parms);
	}
	void UPortalTargetingComponent::StaticRegisterNativesUPortalTargetingComponent()
	{
		UClass* Class = UPortalTargetingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetedPortal", &UPortalTargetingComponent::execGetTargetedPortal },
			{ "Multicast_SetTargetedPortal", &UPortalTargetingComponent::execMulticast_SetTargetedPortal },
			{ "Server_SetTargetedPortal", &UPortalTargetingComponent::execServer_SetTargetedPortal },
			{ "SetIsPorting", &UPortalTargetingComponent::execSetIsPorting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics
	{
		struct PortalTargetingComponent_eventGetTargetedPortal_Parms
		{
			ADemogorgonPortal* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalTargetingComponent_eventGetTargetedPortal_Parms, ReturnValue), Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalTargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalTargetingComponent, nullptr, "GetTargetedPortal", nullptr, nullptr, sizeof(PortalTargetingComponent_eventGetTargetedPortal_Parms), Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetedPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::NewProp_targetedPortal = { "targetedPortal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalTargetingComponent_eventMulticast_SetTargetedPortal_Parms, targetedPortal), Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::NewProp_targetedPortal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalTargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalTargetingComponent, nullptr, "Multicast_SetTargetedPortal", nullptr, nullptr, sizeof(PortalTargetingComponent_eventMulticast_SetTargetedPortal_Parms), Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetedPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::NewProp_targetedPortal = { "targetedPortal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalTargetingComponent_eventServer_SetTargetedPortal_Parms, targetedPortal), Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::NewProp_targetedPortal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalTargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalTargetingComponent, nullptr, "Server_SetTargetedPortal", nullptr, nullptr, sizeof(PortalTargetingComponent_eventServer_SetTargetedPortal_Parms), Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics
	{
		struct PortalTargetingComponent_eventSetIsPorting_Parms
		{
			bool isPorting;
		};
		static void NewProp_isPorting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPorting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::NewProp_isPorting_SetBit(void* Obj)
	{
		((PortalTargetingComponent_eventSetIsPorting_Parms*)Obj)->isPorting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::NewProp_isPorting = { "isPorting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalTargetingComponent_eventSetIsPorting_Parms), &Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::NewProp_isPorting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::NewProp_isPorting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalTargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalTargetingComponent, nullptr, "SetIsPorting", nullptr, nullptr, sizeof(PortalTargetingComponent_eventSetIsPorting_Parms), Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPortalTargetingComponent_NoRegister()
	{
		return UPortalTargetingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPortalTargetingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalPlacerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalPlacerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetedPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetedPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPortalTargetingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPortalTargetingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPortalTargetingComponent_GetTargetedPortal, "GetTargetedPortal" }, // 302286139
		{ &Z_Construct_UFunction_UPortalTargetingComponent_Multicast_SetTargetedPortal, "Multicast_SetTargetedPortal" }, // 533327488
		{ &Z_Construct_UFunction_UPortalTargetingComponent_Server_SetTargetedPortal, "Server_SetTargetedPortal" }, // 672115586
		{ &Z_Construct_UFunction_UPortalTargetingComponent_SetIsPorting, "SetIsPorting" }, // 1345397750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalTargetingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PortalTargetingComponent.h" },
		{ "ModuleRelativePath", "Public/PortalTargetingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__portalPlacerState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PortalTargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__portalPlacerState = { "_portalPlacerState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalTargetingComponent, _portalPlacerState), Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__portalPlacerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__portalPlacerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__targetedPortal_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalTargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__targetedPortal = { "_targetedPortal", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalTargetingComponent, _targetedPortal), Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__targetedPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__targetedPortal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPortalTargetingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__portalPlacerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalTargetingComponent_Statics::NewProp__targetedPortal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPortalTargetingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPortalTargetingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPortalTargetingComponent_Statics::ClassParams = {
		&UPortalTargetingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPortalTargetingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPortalTargetingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPortalTargetingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalTargetingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPortalTargetingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPortalTargetingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPortalTargetingComponent, 194891026);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPortalTargetingComponent>()
	{
		return UPortalTargetingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPortalTargetingComponent(Z_Construct_UClass_UPortalTargetingComponent, &UPortalTargetingComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPortalTargetingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPortalTargetingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
