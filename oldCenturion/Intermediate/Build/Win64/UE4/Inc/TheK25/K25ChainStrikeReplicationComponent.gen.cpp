// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeReplicationComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeReplicationComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeReplicationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EChainStrikeEndReason();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeInteraction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25ChainStrikeReplicationComponent::execMulticast_EndChainStrike)
	{
		P_GET_OBJECT(UK25ChainStrikeInteraction,Z_Param_interaction);
		P_GET_ENUM(EChainStrikeEndReason,Z_Param_endReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_EndChainStrike_Implementation(Z_Param_interaction,EChainStrikeEndReason(Z_Param_endReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeReplicationComponent::execServer_EndChainStrike)
	{
		P_GET_OBJECT(UK25ChainStrikeInteraction,Z_Param_interaction);
		P_GET_ENUM(EChainStrikeEndReason,Z_Param_endReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_EndChainStrike_Implementation(Z_Param_interaction,EChainStrikeEndReason(Z_Param_endReason));
		P_NATIVE_END;
	}
	static FName NAME_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike = FName(TEXT("Multicast_EndChainStrike"));
	void UK25ChainStrikeReplicationComponent::Multicast_EndChainStrike(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason)
	{
		K25ChainStrikeReplicationComponent_eventMulticast_EndChainStrike_Parms Parms;
		Parms.interaction=interaction;
		Parms.endReason=endReason;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike),&Parms);
	}
	static FName NAME_UK25ChainStrikeReplicationComponent_Server_EndChainStrike = FName(TEXT("Server_EndChainStrike"));
	void UK25ChainStrikeReplicationComponent::Server_EndChainStrike(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason)
	{
		K25ChainStrikeReplicationComponent_eventServer_EndChainStrike_Parms Parms;
		Parms.interaction=interaction;
		Parms.endReason=endReason;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeReplicationComponent_Server_EndChainStrike),&Parms);
	}
	void UK25ChainStrikeReplicationComponent::StaticRegisterNativesUK25ChainStrikeReplicationComponent()
	{
		UClass* Class = UK25ChainStrikeReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_EndChainStrike", &UK25ChainStrikeReplicationComponent::execMulticast_EndChainStrike },
			{ "Server_EndChainStrike", &UK25ChainStrikeReplicationComponent::execServer_EndChainStrike },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_endReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_endReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_endReason = { "endReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeReplicationComponent_eventMulticast_EndChainStrike_Parms, endReason), Z_Construct_UEnum_TheK25_EChainStrikeEndReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_endReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeReplicationComponent_eventMulticast_EndChainStrike_Parms, interaction), Z_Construct_UClass_UK25ChainStrikeInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_endReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_endReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeReplicationComponent, nullptr, "Multicast_EndChainStrike", nullptr, nullptr, sizeof(K25ChainStrikeReplicationComponent_eventMulticast_EndChainStrike_Parms), Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_endReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_endReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_endReason = { "endReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeReplicationComponent_eventServer_EndChainStrike_Parms, endReason), Z_Construct_UEnum_TheK25_EChainStrikeEndReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_endReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeReplicationComponent_eventServer_EndChainStrike_Parms, interaction), Z_Construct_UClass_UK25ChainStrikeInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_endReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_endReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeReplicationComponent, nullptr, "Server_EndChainStrike", nullptr, nullptr, sizeof(K25ChainStrikeReplicationComponent_eventServer_EndChainStrike_Parms), Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeReplicationComponent_NoRegister()
	{
		return UK25ChainStrikeReplicationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike, "Multicast_EndChainStrike" }, // 1693673520
		{ &Z_Construct_UFunction_UK25ChainStrikeReplicationComponent_Server_EndChainStrike, "Server_EndChainStrike" }, // 3330037871
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainStrikeReplicationComponent.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeReplicationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeReplicationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::ClassParams = {
		&UK25ChainStrikeReplicationComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeReplicationComponent, 737035778);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeReplicationComponent>()
	{
		return UK25ChainStrikeReplicationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeReplicationComponent(Z_Construct_UClass_UK25ChainStrikeReplicationComponent, &UK25ChainStrikeReplicationComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
