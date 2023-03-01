// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SurvivorChainAttachmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SurvivorChainAttachmentComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainRotationStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData();
// End Cross Module References
	DEFINE_FUNCTION(UK25SurvivorChainAttachmentComponent::execGetFirstChainToRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25Chain**)Z_Param__Result=P_THIS->GetFirstChainToRelease();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25SurvivorChainAttachmentComponent::execOnRep_RemoveChainChargeableComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RemoveChainChargeableComponent();
		P_NATIVE_END;
	}
	void UK25SurvivorChainAttachmentComponent::StaticRegisterNativesUK25SurvivorChainAttachmentComponent()
	{
		UClass* Class = UK25SurvivorChainAttachmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstChainToRelease", &UK25SurvivorChainAttachmentComponent::execGetFirstChainToRelease },
			{ "OnRep_RemoveChainChargeableComponent", &UK25SurvivorChainAttachmentComponent::execOnRep_RemoveChainChargeableComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics
	{
		struct K25SurvivorChainAttachmentComponent_eventGetFirstChainToRelease_Parms
		{
			AK25Chain* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentComponent_eventGetFirstChainToRelease_Parms, ReturnValue), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25SurvivorChainAttachmentComponent, nullptr, "GetFirstChainToRelease", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentComponent_eventGetFirstChainToRelease_Parms), Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25SurvivorChainAttachmentComponent, nullptr, "OnRep_RemoveChainChargeableComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister()
	{
		return UK25SurvivorChainAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAttachmentReplicationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainAttachmentReplicationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorChainRotationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorChainRotationStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__removeChainChargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__removeChainChargeableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chainsAttached;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__chainsAttached_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAttachmentAnchors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chainAttachmentAnchors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainAttachmentAnchors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumNumberOfChainsAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumNumberOfChainsAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interruptableInteractionClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__interruptableInteractionClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__interruptableInteractionClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorChainRotationStrategyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__survivorChainRotationStrategyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorAnchorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorAnchorData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__survivorAnchorData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachmentAnchorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__attachmentAnchorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease, "GetFirstChainToRelease" }, // 4022777006
		{ &Z_Construct_UFunction_UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent, "OnRep_RemoveChainChargeableComponent" }, // 2276144701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K25SurvivorChainAttachmentComponent.h" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentReplicationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentReplicationComponent = { "_chainAttachmentReplicationComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _chainAttachmentReplicationComponent), Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentReplicationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentReplicationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategy = { "_survivorChainRotationStrategy", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _survivorChainRotationStrategy), Z_Construct_UClass_UK25SurvivorChainRotationStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__removeChainChargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__removeChainChargeableComponent = { "_removeChainChargeableComponent", "OnRep_RemoveChainChargeableComponent", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _removeChainChargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__removeChainChargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__removeChainChargeableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainsAttached_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainsAttached = { "_chainsAttached", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _chainsAttached), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainsAttached_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainsAttached_Inner = { "_chainsAttached", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentAnchors_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentAnchors = { "_chainAttachmentAnchors", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _chainAttachmentAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentAnchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentAnchors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentAnchors_Inner = { "_chainAttachmentAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__maximumNumberOfChainsAttached_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__maximumNumberOfChainsAttached = { "_maximumNumberOfChainsAttached", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _maximumNumberOfChainsAttached), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__maximumNumberOfChainsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__maximumNumberOfChainsAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__interruptableInteractionClasses_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__interruptableInteractionClasses = { "_interruptableInteractionClasses", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _interruptableInteractionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__interruptableInteractionClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__interruptableInteractionClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__interruptableInteractionClasses_Inner = { "_interruptableInteractionClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategyClass_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategyClass = { "_survivorChainRotationStrategyClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _survivorChainRotationStrategyClass), Z_Construct_UClass_UK25SurvivorChainRotationStrategy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorAnchorData_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorAnchorData = { "_survivorAnchorData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _survivorAnchorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorAnchorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorAnchorData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorAnchorData_Inner = { "_survivorAnchorData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__attachmentAnchorClass_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__attachmentAnchorClass = { "_attachmentAnchorClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _attachmentAnchorClass), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__attachmentAnchorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__attachmentAnchorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentReplicationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__removeChainChargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainsAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainsAttached_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentAnchors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__chainAttachmentAnchors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__maximumNumberOfChainsAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__interruptableInteractionClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__interruptableInteractionClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorChainRotationStrategyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorAnchorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__survivorAnchorData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::NewProp__attachmentAnchorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25SurvivorChainAttachmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::ClassParams = {
		&UK25SurvivorChainAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25SurvivorChainAttachmentComponent, 367770760);
	template<> THEK25_API UClass* StaticClass<UK25SurvivorChainAttachmentComponent>()
	{
		return UK25SurvivorChainAttachmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25SurvivorChainAttachmentComponent(Z_Construct_UClass_UK25SurvivorChainAttachmentComponent, &UK25SurvivorChainAttachmentComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25SurvivorChainAttachmentComponent"), false, nullptr, nullptr, nullptr);

	void UK25SurvivorChainAttachmentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__chainAttachmentAnchors(TEXT("_chainAttachmentAnchors"));
		static const FName Name__removeChainChargeableComponent(TEXT("_removeChainChargeableComponent"));

		const bool bIsValid = true
			&& Name__chainAttachmentAnchors == ClassReps[(int32)ENetFields_Private::_chainAttachmentAnchors].Property->GetFName()
			&& Name__removeChainChargeableComponent == ClassReps[(int32)ENetFields_Private::_removeChainChargeableComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK25SurvivorChainAttachmentComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25SurvivorChainAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
