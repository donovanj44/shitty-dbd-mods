// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/BearTrapKillerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearTrapKillerComponent() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_UBearTrapKillerComponent_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UBearTrapKillerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
	THETRAPPER_API UClass* Z_Construct_UClass_ABearTrap_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBearTrapKillerComponent::execMulticast_DisarmTrap)
	{
		P_GET_OBJECT(ABearTrap,Z_Param_trapToDisarm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DisarmTrap_Implementation(Z_Param_trapToDisarm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBearTrapKillerComponent::execServer_TryDisarmTrap)
	{
		P_GET_OBJECT(ABearTrap,Z_Param_trapToDisarm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_TryDisarmTrap_Implementation(Z_Param_trapToDisarm);
		P_NATIVE_END;
	}
	static FName NAME_UBearTrapKillerComponent_Multicast_DisarmTrap = FName(TEXT("Multicast_DisarmTrap"));
	void UBearTrapKillerComponent::Multicast_DisarmTrap(ABearTrap* trapToDisarm)
	{
		BearTrapKillerComponent_eventMulticast_DisarmTrap_Parms Parms;
		Parms.trapToDisarm=trapToDisarm;
		ProcessEvent(FindFunctionChecked(NAME_UBearTrapKillerComponent_Multicast_DisarmTrap),&Parms);
	}
	static FName NAME_UBearTrapKillerComponent_Server_TryDisarmTrap = FName(TEXT("Server_TryDisarmTrap"));
	void UBearTrapKillerComponent::Server_TryDisarmTrap(ABearTrap* trapToDisarm)
	{
		BearTrapKillerComponent_eventServer_TryDisarmTrap_Parms Parms;
		Parms.trapToDisarm=trapToDisarm;
		ProcessEvent(FindFunctionChecked(NAME_UBearTrapKillerComponent_Server_TryDisarmTrap),&Parms);
	}
	void UBearTrapKillerComponent::StaticRegisterNativesUBearTrapKillerComponent()
	{
		UClass* Class = UBearTrapKillerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_DisarmTrap", &UBearTrapKillerComponent::execMulticast_DisarmTrap },
			{ "Server_TryDisarmTrap", &UBearTrapKillerComponent::execServer_TryDisarmTrap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trapToDisarm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::NewProp_trapToDisarm = { "trapToDisarm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrapKillerComponent_eventMulticast_DisarmTrap_Parms, trapToDisarm), Z_Construct_UClass_ABearTrap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::NewProp_trapToDisarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrapKillerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearTrapKillerComponent, nullptr, "Multicast_DisarmTrap", nullptr, nullptr, sizeof(BearTrapKillerComponent_eventMulticast_DisarmTrap_Parms), Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trapToDisarm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::NewProp_trapToDisarm = { "trapToDisarm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrapKillerComponent_eventServer_TryDisarmTrap_Parms, trapToDisarm), Z_Construct_UClass_ABearTrap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::NewProp_trapToDisarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrapKillerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearTrapKillerComponent, nullptr, "Server_TryDisarmTrap", nullptr, nullptr, sizeof(BearTrapKillerComponent_eventServer_TryDisarmTrap_Parms), Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBearTrapKillerComponent_NoRegister()
	{
		return UBearTrapKillerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBearTrapKillerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBearTrapKillerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBearTrapKillerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBearTrapKillerComponent_Multicast_DisarmTrap, "Multicast_DisarmTrap" }, // 2253748235
		{ &Z_Construct_UFunction_UBearTrapKillerComponent_Server_TryDisarmTrap, "Server_TryDisarmTrap" }, // 564560804
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapKillerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BearTrapKillerComponent.h" },
		{ "ModuleRelativePath", "Public/BearTrapKillerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBearTrapKillerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBearTrapKillerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBearTrapKillerComponent_Statics::ClassParams = {
		&UBearTrapKillerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBearTrapKillerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapKillerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBearTrapKillerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBearTrapKillerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBearTrapKillerComponent, 1784308768);
	template<> THETRAPPER_API UClass* StaticClass<UBearTrapKillerComponent>()
	{
		return UBearTrapKillerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBearTrapKillerComponent(Z_Construct_UClass_UBearTrapKillerComponent, &UBearTrapKillerComponent::StaticClass, TEXT("/Script/TheTrapper"), TEXT("UBearTrapKillerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBearTrapKillerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
