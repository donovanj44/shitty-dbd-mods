// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainLocomotionSurvivorAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainLocomotionSurvivorAnimInstance() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData();
// End Cross Module References
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execGetChainAttachmentAnchors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AK25SurvivorChainAttachmentAnchor*>*)Z_Param__Result=P_THIS->GetChainAttachmentAnchors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execGetDetachingChainAnchorData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FK25SurvivorChainAttachmentData*)Z_Param__Result=P_THIS->GetDetachingChainAnchorData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execGetSurvivorChainAttachmentComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UK25SurvivorChainAttachmentComponent**)Z_Param__Result=P_THIS->GetSurvivorChainAttachmentComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execHasChainsAttached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasChainsAttached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execIsSolvingLamentConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSolvingLamentConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execOnChainAttached)
	{
		P_GET_OBJECT(AK25Chain,Z_Param_chain);
		P_GET_OBJECT(AK25SurvivorChainAttachmentAnchor,Z_Param_chainAttachmentAnchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChainAttached(Z_Param_chain,Z_Param_chainAttachmentAnchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execOnChainDetached)
	{
		P_GET_OBJECT(AK25Chain,Z_Param_chain);
		P_GET_OBJECT(AK25SurvivorChainAttachmentAnchor,Z_Param_chainAttachmentAnchor);
		P_GET_ENUM(EK25ChainDetachmentReason,Z_Param_detachmentReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChainDetached(Z_Param_chain,Z_Param_chainAttachmentAnchor,EK25ChainDetachmentReason(Z_Param_detachmentReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainLocomotionSurvivorAnimInstance::execOnRemoveChainChargePercentageChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_completionPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveChainChargePercentageChanged(Z_Param_chargeableComponent,Z_Param_completionPercentage);
		P_NATIVE_END;
	}
	static FName NAME_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached = FName(TEXT("BP_OnChainAttached"));
	void UK25ChainLocomotionSurvivorAnimInstance::BP_OnChainAttached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor)
	{
		K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainAttached_Parms Parms;
		Parms.chain=chain;
		Parms.chainAttachmentAnchor=chainAttachmentAnchor;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached),&Parms);
	}
	static FName NAME_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached = FName(TEXT("BP_OnChainDetached"));
	void UK25ChainLocomotionSurvivorAnimInstance::BP_OnChainDetached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor)
	{
		K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainDetached_Parms Parms;
		Parms.chain=chain;
		Parms.chainAttachmentAnchor=chainAttachmentAnchor;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached),&Parms);
	}
	void UK25ChainLocomotionSurvivorAnimInstance::StaticRegisterNativesUK25ChainLocomotionSurvivorAnimInstance()
	{
		UClass* Class = UK25ChainLocomotionSurvivorAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChainAttachmentAnchors", &UK25ChainLocomotionSurvivorAnimInstance::execGetChainAttachmentAnchors },
			{ "GetDetachingChainAnchorData", &UK25ChainLocomotionSurvivorAnimInstance::execGetDetachingChainAnchorData },
			{ "GetSurvivorChainAttachmentComponent", &UK25ChainLocomotionSurvivorAnimInstance::execGetSurvivorChainAttachmentComponent },
			{ "HasChainsAttached", &UK25ChainLocomotionSurvivorAnimInstance::execHasChainsAttached },
			{ "IsSolvingLamentConfiguration", &UK25ChainLocomotionSurvivorAnimInstance::execIsSolvingLamentConfiguration },
			{ "OnChainAttached", &UK25ChainLocomotionSurvivorAnimInstance::execOnChainAttached },
			{ "OnChainDetached", &UK25ChainLocomotionSurvivorAnimInstance::execOnChainDetached },
			{ "OnRemoveChainChargePercentageChanged", &UK25ChainLocomotionSurvivorAnimInstance::execOnRemoveChainChargePercentageChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainAttachmentAnchor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::NewProp_chainAttachmentAnchor = { "chainAttachmentAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainAttached_Parms, chainAttachmentAnchor), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::NewProp_chain = { "chain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainAttached_Parms, chain), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::NewProp_chainAttachmentAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::NewProp_chain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "BP_OnChainAttached", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainAttached_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainAttachmentAnchor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::NewProp_chainAttachmentAnchor = { "chainAttachmentAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainDetached_Parms, chainAttachmentAnchor), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::NewProp_chain = { "chain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainDetached_Parms, chain), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::NewProp_chainAttachmentAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::NewProp_chain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "BP_OnChainDetached", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainDetached_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventGetChainAttachmentAnchors_Parms
		{
			TArray<AK25SurvivorChainAttachmentAnchor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventGetChainAttachmentAnchors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "GetChainAttachmentAnchors", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventGetChainAttachmentAnchors_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventGetDetachingChainAnchorData_Parms
		{
			FK25SurvivorChainAttachmentData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventGetDetachingChainAnchorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "GetDetachingChainAnchorData", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventGetDetachingChainAnchorData_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventGetSurvivorChainAttachmentComponent_Parms
		{
			UK25SurvivorChainAttachmentComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventGetSurvivorChainAttachmentComponent_Parms, ReturnValue), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "GetSurvivorChainAttachmentComponent", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventGetSurvivorChainAttachmentComponent_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventHasChainsAttached_Parms
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
	void Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((K25ChainLocomotionSurvivorAnimInstance_eventHasChainsAttached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25ChainLocomotionSurvivorAnimInstance_eventHasChainsAttached_Parms), &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "HasChainsAttached", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventHasChainsAttached_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventIsSolvingLamentConfiguration_Parms
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
	void Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((K25ChainLocomotionSurvivorAnimInstance_eventIsSolvingLamentConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25ChainLocomotionSurvivorAnimInstance_eventIsSolvingLamentConfiguration_Parms), &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "IsSolvingLamentConfiguration", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventIsSolvingLamentConfiguration_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventOnChainAttached_Parms
		{
			AK25Chain* chain;
			AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainAttachmentAnchor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::NewProp_chainAttachmentAnchor = { "chainAttachmentAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventOnChainAttached_Parms, chainAttachmentAnchor), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::NewProp_chain = { "chain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventOnChainAttached_Parms, chain), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::NewProp_chainAttachmentAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::NewProp_chain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "OnChainAttached", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventOnChainAttached_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventOnChainDetached_Parms
		{
			AK25Chain* chain;
			AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor;
			EK25ChainDetachmentReason detachmentReason;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_detachmentReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_detachmentReason_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainAttachmentAnchor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_detachmentReason = { "detachmentReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventOnChainDetached_Parms, detachmentReason), Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_detachmentReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_chainAttachmentAnchor = { "chainAttachmentAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventOnChainDetached_Parms, chainAttachmentAnchor), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_chain = { "chain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventOnChainDetached_Parms, chain), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_detachmentReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_detachmentReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_chainAttachmentAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::NewProp_chain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "OnChainDetached", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventOnChainDetached_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics
	{
		struct K25ChainLocomotionSurvivorAnimInstance_eventOnRemoveChainChargePercentageChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float completionPercentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_completionPercentage;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::NewProp_completionPercentage = { "completionPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventOnRemoveChainChargePercentageChanged_Parms, completionPercentage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainLocomotionSurvivorAnimInstance_eventOnRemoveChainChargePercentageChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::NewProp_completionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, nullptr, "OnRemoveChainChargePercentageChanged", nullptr, nullptr, sizeof(K25ChainLocomotionSurvivorAnimInstance_eventOnRemoveChainChargePercentageChanged_Parms), Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_NoRegister()
	{
		return UK25ChainLocomotionSurvivorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfChainsAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfChainsAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBeenHitByChainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hasBeenHitByChainTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBeenHitByChain_MetaData[];
#endif
		static void NewProp__hasBeenHitByChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBeenHitByChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBrokenFreeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hasBrokenFreeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBrokenFreeFromChain_MetaData[];
#endif
		static void NewProp__hasBrokenFreeFromChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBrokenFreeFromChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastDetatchedChainDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__lastDetatchedChainDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__lastDetatchedChainDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__chainDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__chainDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backAttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__backAttachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stomachAttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stomachAttachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightShoulderAttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightShoulderAttachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftShoulderAttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftShoulderAttachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightHandAttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightHandAttachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftHandAttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftHandAttachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentChainBeingDetached_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentChainBeingDetached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lateralDirectionDotProductResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lateralDirectionDotProductResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forwardDirectionDotProductResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__forwardDirectionDotProductResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPerformingBreakChainInteraction_MetaData[];
#endif
		static void NewProp__isPerformingBreakChainInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPerformingBreakChainInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__breakChainInteractionCompletionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__breakChainInteractionCompletionPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasChainsAttached_MetaData[];
#endif
		static void NewProp__hasChainsAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasChainsAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached, "BP_OnChainAttached" }, // 1623436487
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached, "BP_OnChainDetached" }, // 2127815084
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors, "GetChainAttachmentAnchors" }, // 2779578007
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData, "GetDetachingChainAnchorData" }, // 1196022955
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent, "GetSurvivorChainAttachmentComponent" }, // 4049675994
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached, "HasChainsAttached" }, // 1013059760
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration, "IsSolvingLamentConfiguration" }, // 4115381504
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached, "OnChainAttached" }, // 2020197129
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached, "OnChainDetached" }, // 4155714179
		{ &Z_Construct_UFunction_UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged, "OnRemoveChainChargePercentageChanged" }, // 2478405329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K25ChainLocomotionSurvivorAnimInstance.h" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__numberOfChainsAttached_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__numberOfChainsAttached = { "_numberOfChainsAttached", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _numberOfChainsAttached), METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__numberOfChainsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__numberOfChainsAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChainTime_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChainTime = { "_hasBeenHitByChainTime", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _hasBeenHitByChainTime), METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChainTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChain_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChain_SetBit(void* Obj)
	{
		((UK25ChainLocomotionSurvivorAnimInstance*)Obj)->_hasBeenHitByChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChain = { "_hasBeenHitByChain", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25ChainLocomotionSurvivorAnimInstance), &Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChain_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeTime_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeTime = { "_hasBrokenFreeTime", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _hasBrokenFreeTime), METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeFromChain_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeFromChain_SetBit(void* Obj)
	{
		((UK25ChainLocomotionSurvivorAnimInstance*)Obj)->_hasBrokenFreeFromChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeFromChain = { "_hasBrokenFreeFromChain", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25ChainLocomotionSurvivorAnimInstance), &Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeFromChain_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeFromChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeFromChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lastDetatchedChainDirection_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lastDetatchedChainDirection = { "_lastDetatchedChainDirection", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _lastDetatchedChainDirection), Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lastDetatchedChainDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lastDetatchedChainDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lastDetatchedChainDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__chainDirection_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__chainDirection = { "_chainDirection", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _chainDirection), Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__chainDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__chainDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__chainDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__backAttachmentData_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__backAttachmentData = { "_backAttachmentData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _backAttachmentData), Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__backAttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__backAttachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__stomachAttachmentData_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__stomachAttachmentData = { "_stomachAttachmentData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _stomachAttachmentData), Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__stomachAttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__stomachAttachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightShoulderAttachmentData_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightShoulderAttachmentData = { "_rightShoulderAttachmentData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _rightShoulderAttachmentData), Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightShoulderAttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightShoulderAttachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftShoulderAttachmentData_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftShoulderAttachmentData = { "_leftShoulderAttachmentData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _leftShoulderAttachmentData), Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftShoulderAttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftShoulderAttachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightHandAttachmentData_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightHandAttachmentData = { "_rightHandAttachmentData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _rightHandAttachmentData), Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightHandAttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightHandAttachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftHandAttachmentData_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftHandAttachmentData = { "_leftHandAttachmentData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _leftHandAttachmentData), Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftHandAttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftHandAttachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__currentChainBeingDetached_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__currentChainBeingDetached = { "_currentChainBeingDetached", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _currentChainBeingDetached), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__currentChainBeingDetached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__currentChainBeingDetached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lateralDirectionDotProductResult_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lateralDirectionDotProductResult = { "_lateralDirectionDotProductResult", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _lateralDirectionDotProductResult), METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lateralDirectionDotProductResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lateralDirectionDotProductResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__forwardDirectionDotProductResult_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__forwardDirectionDotProductResult = { "_forwardDirectionDotProductResult", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _forwardDirectionDotProductResult), METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__forwardDirectionDotProductResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__forwardDirectionDotProductResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__isPerformingBreakChainInteraction_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__isPerformingBreakChainInteraction_SetBit(void* Obj)
	{
		((UK25ChainLocomotionSurvivorAnimInstance*)Obj)->_isPerformingBreakChainInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__isPerformingBreakChainInteraction = { "_isPerformingBreakChainInteraction", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25ChainLocomotionSurvivorAnimInstance), &Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__isPerformingBreakChainInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__isPerformingBreakChainInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__isPerformingBreakChainInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__breakChainInteractionCompletionPercentage_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__breakChainInteractionCompletionPercentage = { "_breakChainInteractionCompletionPercentage", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _breakChainInteractionCompletionPercentage), METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__breakChainInteractionCompletionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__breakChainInteractionCompletionPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasChainsAttached_MetaData[] = {
		{ "Category", "K25ChainLocomotionSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/K25ChainLocomotionSurvivorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasChainsAttached_SetBit(void* Obj)
	{
		((UK25ChainLocomotionSurvivorAnimInstance*)Obj)->_hasChainsAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasChainsAttached = { "_hasChainsAttached", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25ChainLocomotionSurvivorAnimInstance), &Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasChainsAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasChainsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasChainsAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__numberOfChainsAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBeenHitByChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasBrokenFreeFromChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lastDetatchedChainDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lastDetatchedChainDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__chainDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__chainDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__backAttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__stomachAttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightShoulderAttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftShoulderAttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__rightHandAttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__leftHandAttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__currentChainBeingDetached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__lateralDirectionDotProductResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__forwardDirectionDotProductResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__isPerformingBreakChainInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__breakChainInteractionCompletionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::NewProp__hasChainsAttached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainLocomotionSurvivorAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::ClassParams = {
		&UK25ChainLocomotionSurvivorAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainLocomotionSurvivorAnimInstance, 3266296014);
	template<> THEK25_API UClass* StaticClass<UK25ChainLocomotionSurvivorAnimInstance>()
	{
		return UK25ChainLocomotionSurvivorAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainLocomotionSurvivorAnimInstance(Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance, &UK25ChainLocomotionSurvivorAnimInstance::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainLocomotionSurvivorAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainLocomotionSurvivorAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
