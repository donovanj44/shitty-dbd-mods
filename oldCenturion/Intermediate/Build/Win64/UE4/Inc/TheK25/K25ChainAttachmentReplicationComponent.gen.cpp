// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainAttachmentReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainAttachmentReplicationComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainAttachmentReplicationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UK25ChainAttachmentReplicationComponent::execMulticast_AttachChainToAnchor)
	{
		P_GET_OBJECT(UK25SurvivorChainAttachmentComponent,Z_Param_chainAttachementComponent);
		P_GET_OBJECT(AK25Chain,Z_Param_chainToAttach);
		P_GET_OBJECT(AK25SurvivorChainAttachmentAnchor,Z_Param_anchorPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AttachChainToAnchor_Implementation(Z_Param_chainAttachementComponent,Z_Param_chainToAttach,Z_Param_anchorPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainAttachmentReplicationComponent::execMulticast_DetachChains)
	{
		P_GET_OBJECT(UK25SurvivorChainAttachmentComponent,Z_Param_chainAttachementComponent);
		P_GET_TARRAY(AK25Chain*,Z_Param_chainsToDetach);
		P_GET_ENUM(EK25ChainDetachmentReason,Z_Param_detachmentReason);
		P_GET_TARRAY(AK25Chain*,Z_Param_chainsAttached);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DetachChains_Implementation(Z_Param_chainAttachementComponent,Z_Param_chainsToDetach,EK25ChainDetachmentReason(Z_Param_detachmentReason),Z_Param_chainsAttached);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainAttachmentReplicationComponent::execMulticast_LaunchInstantHitChainTowardsSurvivor)
	{
		P_GET_OBJECT(AK25Chain,Z_Param_newChainToAttach);
		P_GET_OBJECT(AK25SurvivorChainAttachmentAnchor,Z_Param_targetAnchor);
		P_GET_STRUCT(FVector,Z_Param_startPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_LaunchInstantHitChainTowardsSurvivor_Implementation(Z_Param_newChainToAttach,Z_Param_targetAnchor,Z_Param_startPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainAttachmentReplicationComponent::execMulticast_StartChainReelback)
	{
		P_GET_OBJECT(AK25Chain,Z_Param_chainToAttach);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartChainReelback_Implementation(Z_Param_chainToAttach);
		P_NATIVE_END;
	}
	static FName NAME_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor = FName(TEXT("Multicast_AttachChainToAnchor"));
	void UK25ChainAttachmentReplicationComponent::Multicast_AttachChainToAnchor(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, AK25Chain* chainToAttach, AK25SurvivorChainAttachmentAnchor* anchorPoint)
	{
		K25ChainAttachmentReplicationComponent_eventMulticast_AttachChainToAnchor_Parms Parms;
		Parms.chainAttachementComponent=chainAttachementComponent;
		Parms.chainToAttach=chainToAttach;
		Parms.anchorPoint=anchorPoint;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor),&Parms);
	}
	static FName NAME_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains = FName(TEXT("Multicast_DetachChains"));
	void UK25ChainAttachmentReplicationComponent::Multicast_DetachChains(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, TArray<AK25Chain*> const& chainsToDetach, EK25ChainDetachmentReason detachmentReason, TArray<AK25Chain*> const& chainsAttached)
	{
		K25ChainAttachmentReplicationComponent_eventMulticast_DetachChains_Parms Parms;
		Parms.chainAttachementComponent=chainAttachementComponent;
		Parms.chainsToDetach=chainsToDetach;
		Parms.detachmentReason=detachmentReason;
		Parms.chainsAttached=chainsAttached;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains),&Parms);
	}
	static FName NAME_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor = FName(TEXT("Multicast_LaunchInstantHitChainTowardsSurvivor"));
	void UK25ChainAttachmentReplicationComponent::Multicast_LaunchInstantHitChainTowardsSurvivor(AK25Chain* newChainToAttach, AK25SurvivorChainAttachmentAnchor* targetAnchor, FVector const& startPosition)
	{
		K25ChainAttachmentReplicationComponent_eventMulticast_LaunchInstantHitChainTowardsSurvivor_Parms Parms;
		Parms.newChainToAttach=newChainToAttach;
		Parms.targetAnchor=targetAnchor;
		Parms.startPosition=startPosition;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor),&Parms);
	}
	static FName NAME_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback = FName(TEXT("Multicast_StartChainReelback"));
	void UK25ChainAttachmentReplicationComponent::Multicast_StartChainReelback(AK25Chain* chainToAttach)
	{
		K25ChainAttachmentReplicationComponent_eventMulticast_StartChainReelback_Parms Parms;
		Parms.chainToAttach=chainToAttach;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback),&Parms);
	}
	void UK25ChainAttachmentReplicationComponent::StaticRegisterNativesUK25ChainAttachmentReplicationComponent()
	{
		UClass* Class = UK25ChainAttachmentReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_AttachChainToAnchor", &UK25ChainAttachmentReplicationComponent::execMulticast_AttachChainToAnchor },
			{ "Multicast_DetachChains", &UK25ChainAttachmentReplicationComponent::execMulticast_DetachChains },
			{ "Multicast_LaunchInstantHitChainTowardsSurvivor", &UK25ChainAttachmentReplicationComponent::execMulticast_LaunchInstantHitChainTowardsSurvivor },
			{ "Multicast_StartChainReelback", &UK25ChainAttachmentReplicationComponent::execMulticast_StartChainReelback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_anchorPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainToAttach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chainAttachementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainAttachementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_anchorPoint = { "anchorPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_AttachChainToAnchor_Parms, anchorPoint), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_chainToAttach = { "chainToAttach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_AttachChainToAnchor_Parms, chainToAttach), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_chainAttachementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_chainAttachementComponent = { "chainAttachementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_AttachChainToAnchor_Parms, chainAttachementComponent), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_chainAttachementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_chainAttachementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_anchorPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_chainToAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::NewProp_chainAttachementComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainAttachmentReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainAttachmentReplicationComponent, nullptr, "Multicast_AttachChainToAnchor", nullptr, nullptr, sizeof(K25ChainAttachmentReplicationComponent_eventMulticast_AttachChainToAnchor_Parms), Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chainsAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_chainsAttached;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainsAttached_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_detachmentReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_detachmentReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chainsToDetach_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_chainsToDetach;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainsToDetach_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chainAttachementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainAttachementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsAttached_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsAttached = { "chainsAttached", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_DetachChains_Parms, chainsAttached), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsAttached_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsAttached_Inner = { "chainsAttached", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_detachmentReason = { "detachmentReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_DetachChains_Parms, detachmentReason), Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_detachmentReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsToDetach_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsToDetach = { "chainsToDetach", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_DetachChains_Parms, chainsToDetach), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsToDetach_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsToDetach_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsToDetach_Inner = { "chainsToDetach", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainAttachementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainAttachementComponent = { "chainAttachementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_DetachChains_Parms, chainAttachementComponent), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainAttachementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainAttachementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsAttached_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_detachmentReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_detachmentReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsToDetach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainsToDetach_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::NewProp_chainAttachementComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainAttachmentReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainAttachmentReplicationComponent, nullptr, "Multicast_DetachChains", nullptr, nullptr, sizeof(K25ChainAttachmentReplicationComponent_eventMulticast_DetachChains_Parms), Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetAnchor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newChainToAttach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_startPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_startPosition = { "startPosition", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_LaunchInstantHitChainTowardsSurvivor_Parms, startPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_startPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_startPosition_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_targetAnchor = { "targetAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_LaunchInstantHitChainTowardsSurvivor_Parms, targetAnchor), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_newChainToAttach = { "newChainToAttach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_LaunchInstantHitChainTowardsSurvivor_Parms, newChainToAttach), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_startPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_targetAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::NewProp_newChainToAttach,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainAttachmentReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainAttachmentReplicationComponent, nullptr, "Multicast_LaunchInstantHitChainTowardsSurvivor", nullptr, nullptr, sizeof(K25ChainAttachmentReplicationComponent_eventMulticast_LaunchInstantHitChainTowardsSurvivor_Parms), Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainToAttach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::NewProp_chainToAttach = { "chainToAttach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainAttachmentReplicationComponent_eventMulticast_StartChainReelback_Parms, chainToAttach), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::NewProp_chainToAttach,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainAttachmentReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainAttachmentReplicationComponent, nullptr, "Multicast_StartChainReelback", nullptr, nullptr, sizeof(K25ChainAttachmentReplicationComponent_eventMulticast_StartChainReelback_Parms), Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_NoRegister()
	{
		return UK25ChainAttachmentReplicationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor, "Multicast_AttachChainToAnchor" }, // 2587009271
		{ &Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_DetachChains, "Multicast_DetachChains" }, // 1647673062
		{ &Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor, "Multicast_LaunchInstantHitChainTowardsSurvivor" }, // 525801733
		{ &Z_Construct_UFunction_UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback, "Multicast_StartChainReelback" }, // 3704094725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainAttachmentReplicationComponent.h" },
		{ "ModuleRelativePath", "Public/K25ChainAttachmentReplicationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainAttachmentReplicationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::ClassParams = {
		&UK25ChainAttachmentReplicationComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainAttachmentReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainAttachmentReplicationComponent, 546084249);
	template<> THEK25_API UClass* StaticClass<UK25ChainAttachmentReplicationComponent>()
	{
		return UK25ChainAttachmentReplicationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainAttachmentReplicationComponent(Z_Construct_UClass_UK25ChainAttachmentReplicationComponent, &UK25ChainAttachmentReplicationComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainAttachmentReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainAttachmentReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
