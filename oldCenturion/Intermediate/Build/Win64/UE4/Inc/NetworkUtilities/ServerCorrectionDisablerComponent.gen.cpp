// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/ServerCorrectionDisablerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerCorrectionDisablerComponent() {}
// Cross Module References
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UServerCorrectionDisablerComponent_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UServerCorrectionDisablerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UServerCorrectionDisablerComponent::execGetServerCorrectionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetServerCorrectionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerCorrectionDisablerComponent::execMulticast_SetServerCorrectionEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_GET_STRUCT(FGameplayTag,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetServerCorrectionEnabled_Implementation(Z_Param_enabled,Z_Param_channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerCorrectionDisablerComponent::execSetServerCorrectionEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_GET_STRUCT(FGameplayTag,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerCorrectionEnabled(Z_Param_enabled,Z_Param_channel);
		P_NATIVE_END;
	}
	static FName NAME_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled = FName(TEXT("Multicast_SetServerCorrectionEnabled"));
	void UServerCorrectionDisablerComponent::Multicast_SetServerCorrectionEnabled(bool enabled, FGameplayTag channel)
	{
		ServerCorrectionDisablerComponent_eventMulticast_SetServerCorrectionEnabled_Parms Parms;
		Parms.enabled=enabled ? true : false;
		Parms.channel=channel;
		ProcessEvent(FindFunctionChecked(NAME_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled),&Parms);
	}
	void UServerCorrectionDisablerComponent::StaticRegisterNativesUServerCorrectionDisablerComponent()
	{
		UClass* Class = UServerCorrectionDisablerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetServerCorrectionEnabled", &UServerCorrectionDisablerComponent::execGetServerCorrectionEnabled },
			{ "Multicast_SetServerCorrectionEnabled", &UServerCorrectionDisablerComponent::execMulticast_SetServerCorrectionEnabled },
			{ "SetServerCorrectionEnabled", &UServerCorrectionDisablerComponent::execSetServerCorrectionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics
	{
		struct ServerCorrectionDisablerComponent_eventGetServerCorrectionEnabled_Parms
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
	void Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ServerCorrectionDisablerComponent_eventGetServerCorrectionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ServerCorrectionDisablerComponent_eventGetServerCorrectionEnabled_Parms), &Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ServerCorrectionDisablerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerCorrectionDisablerComponent, nullptr, "GetServerCorrectionEnabled", nullptr, nullptr, sizeof(ServerCorrectionDisablerComponent_eventGetServerCorrectionEnabled_Parms), Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enabled_MetaData[];
#endif
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerCorrectionDisablerComponent_eventMulticast_SetServerCorrectionEnabled_Parms, channel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ServerCorrectionDisablerComponent_eventMulticast_SetServerCorrectionEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ServerCorrectionDisablerComponent_eventMulticast_SetServerCorrectionEnabled_Parms), &Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ServerCorrectionDisablerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerCorrectionDisablerComponent, nullptr, "Multicast_SetServerCorrectionEnabled", nullptr, nullptr, sizeof(ServerCorrectionDisablerComponent_eventMulticast_SetServerCorrectionEnabled_Parms), Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics
	{
		struct ServerCorrectionDisablerComponent_eventSetServerCorrectionEnabled_Parms
		{
			bool enabled;
			FGameplayTag channel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enabled_MetaData[];
#endif
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerCorrectionDisablerComponent_eventSetServerCorrectionEnabled_Parms, channel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ServerCorrectionDisablerComponent_eventSetServerCorrectionEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ServerCorrectionDisablerComponent_eventSetServerCorrectionEnabled_Parms), &Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ServerCorrectionDisablerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerCorrectionDisablerComponent, nullptr, "SetServerCorrectionEnabled", nullptr, nullptr, sizeof(ServerCorrectionDisablerComponent_eventSetServerCorrectionEnabled_Parms), Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerCorrectionDisablerComponent_NoRegister()
	{
		return UServerCorrectionDisablerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerCorrectionDisablerComponent_GetServerCorrectionEnabled, "GetServerCorrectionEnabled" }, // 3941596696
		{ &Z_Construct_UFunction_UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled, "Multicast_SetServerCorrectionEnabled" }, // 54181056
		{ &Z_Construct_UFunction_UServerCorrectionDisablerComponent_SetServerCorrectionEnabled, "SetServerCorrectionEnabled" }, // 3825275017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ServerCorrectionDisablerComponent.h" },
		{ "ModuleRelativePath", "Public/ServerCorrectionDisablerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerCorrectionDisablerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::ClassParams = {
		&UServerCorrectionDisablerComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerCorrectionDisablerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerCorrectionDisablerComponent, 3173760027);
	template<> NETWORKUTILITIES_API UClass* StaticClass<UServerCorrectionDisablerComponent>()
	{
		return UServerCorrectionDisablerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerCorrectionDisablerComponent(Z_Construct_UClass_UServerCorrectionDisablerComponent, &UServerCorrectionDisablerComponent::StaticClass, TEXT("/Script/NetworkUtilities"), TEXT("UServerCorrectionDisablerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerCorrectionDisablerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
