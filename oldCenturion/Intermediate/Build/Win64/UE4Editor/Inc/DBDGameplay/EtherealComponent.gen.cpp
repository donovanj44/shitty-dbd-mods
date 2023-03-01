// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/EtherealComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEtherealComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UEtherealComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UEtherealComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMovementSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEthereal_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEtherealComponent::execOnRep_OnIsEtherealChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OnIsEtherealChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEtherealComponent::execServer_SetIsEthereal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_UBOOL(Z_Param_ethereal);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetIsEthereal_Validate(Z_Param_timestamp,Z_Param_ethereal))
		{
			RPC_ValidateFailed(TEXT("Server_SetIsEthereal_Validate"));
			return;
		}
		P_THIS->Server_SetIsEthereal_Implementation(Z_Param_timestamp,Z_Param_ethereal);
		P_NATIVE_END;
	}
	static FName NAME_UEtherealComponent_Server_SetIsEthereal = FName(TEXT("Server_SetIsEthereal"));
	void UEtherealComponent::Server_SetIsEthereal(float timestamp, bool ethereal)
	{
		EtherealComponent_eventServer_SetIsEthereal_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.ethereal=ethereal ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEtherealComponent_Server_SetIsEthereal),&Parms);
	}
	void UEtherealComponent::StaticRegisterNativesUEtherealComponent()
	{
		UClass* Class = UEtherealComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_OnIsEtherealChanged", &UEtherealComponent::execOnRep_OnIsEtherealChanged },
			{ "Server_SetIsEthereal", &UEtherealComponent::execServer_SetIsEthereal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EtherealComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEtherealComponent, nullptr, "OnRep_OnIsEtherealChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics
	{
		static void NewProp_ethereal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ethereal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::NewProp_ethereal_SetBit(void* Obj)
	{
		((EtherealComponent_eventServer_SetIsEthereal_Parms*)Obj)->ethereal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::NewProp_ethereal = { "ethereal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EtherealComponent_eventServer_SetIsEthereal_Parms), &Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::NewProp_ethereal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EtherealComponent_eventServer_SetIsEthereal_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::NewProp_ethereal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EtherealComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEtherealComponent, nullptr, "Server_SetIsEthereal", nullptr, nullptr, sizeof(EtherealComponent_eventServer_SetIsEthereal_Parms), Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEtherealComponent_NoRegister()
	{
		return UEtherealComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEtherealComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEthereal_MetaData[];
#endif
		static void NewProp__isEthereal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEthereal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEtherealComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEtherealComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEtherealComponent_OnRep_OnIsEtherealChanged, "OnRep_OnIsEtherealChanged" }, // 2462255585
		{ &Z_Construct_UFunction_UEtherealComponent_Server_SetIsEthereal, "Server_SetIsEthereal" }, // 1122927344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEtherealComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EtherealComponent.h" },
		{ "ModuleRelativePath", "Public/EtherealComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEtherealComponent_Statics::NewProp__isEthereal_MetaData[] = {
		{ "ModuleRelativePath", "Public/EtherealComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEtherealComponent_Statics::NewProp__isEthereal_SetBit(void* Obj)
	{
		((UEtherealComponent*)Obj)->_isEthereal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEtherealComponent_Statics::NewProp__isEthereal = { "_isEthereal", "OnRep_OnIsEtherealChanged", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEtherealComponent), &Z_Construct_UClass_UEtherealComponent_Statics::NewProp__isEthereal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEtherealComponent_Statics::NewProp__isEthereal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEtherealComponent_Statics::NewProp__isEthereal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEtherealComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEtherealComponent_Statics::NewProp__isEthereal,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEtherealComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovementSettings_NoRegister, (int32)VTABLE_OFFSET(UEtherealComponent, IMovementSettings), false },
			{ Z_Construct_UClass_UEthereal_NoRegister, (int32)VTABLE_OFFSET(UEtherealComponent, IEthereal), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEtherealComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEtherealComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEtherealComponent_Statics::ClassParams = {
		&UEtherealComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEtherealComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEtherealComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEtherealComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEtherealComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEtherealComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEtherealComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEtherealComponent, 2623867804);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UEtherealComponent>()
	{
		return UEtherealComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEtherealComponent(Z_Construct_UClass_UEtherealComponent, &UEtherealComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UEtherealComponent"), false, nullptr, nullptr, nullptr);

	void UEtherealComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isEthereal(TEXT("_isEthereal"));

		const bool bIsValid = true
			&& Name__isEthereal == ClassReps[(int32)ENetFields_Private::_isEthereal].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEtherealComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEtherealComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
