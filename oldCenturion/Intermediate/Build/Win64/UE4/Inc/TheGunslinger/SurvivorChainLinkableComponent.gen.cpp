// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/SurvivorChainLinkableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorChainLinkableComponent() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_USurvivorChainLinkableComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_USurvivorChainLinkableComponent();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainLinkableComponent();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorChainLinkableComponent::execOnRep_VelocityAdditiveStrategy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_VelocityAdditiveStrategy();
		P_NATIVE_END;
	}
	void USurvivorChainLinkableComponent::StaticRegisterNativesUSurvivorChainLinkableComponent()
	{
		UClass* Class = USurvivorChainLinkableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_VelocityAdditiveStrategy", &USurvivorChainLinkableComponent::execOnRep_VelocityAdditiveStrategy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorChainLinkableComponent, nullptr, "OnRep_VelocityAdditiveStrategy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorChainLinkableComponent_NoRegister()
	{
		return USurvivorChainLinkableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorChainLinkableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__velocityAdditiveStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__velocityAdditiveStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__immobilizationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__immobilizationEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkedMoveInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__linkedMoveInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__immobilizationEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__immobilizationEffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__velocityAdditiveStrategyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__velocityAdditiveStrategyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cancelableInteractionTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cancelableInteractionTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkableInteractionTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__linkableInteractionTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__immobilizationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__immobilizationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pullbackAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pullbackAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChainLinkableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy, "OnRep_VelocityAdditiveStrategy" }, // 406873898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorChainLinkableComponent.h" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategy = { "_velocityAdditiveStrategy", "OnRep_VelocityAdditiveStrategy", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _velocityAdditiveStrategy), Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffect = { "_immobilizationEffect", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _immobilizationEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkedMoveInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkedMoveInput = { "_linkedMoveInput", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _linkedMoveInput), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkedMoveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkedMoveInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffectName_MetaData[] = {
		{ "Category", "SurvivorChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffectName = { "_immobilizationEffectName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _immobilizationEffectName), METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategyClass_MetaData[] = {
		{ "Category", "SurvivorChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategyClass = { "_velocityAdditiveStrategyClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _velocityAdditiveStrategyClass), Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__cancelableInteractionTags_MetaData[] = {
		{ "Category", "SurvivorChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__cancelableInteractionTags = { "_cancelableInteractionTags", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _cancelableInteractionTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__cancelableInteractionTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__cancelableInteractionTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkableInteractionTags_MetaData[] = {
		{ "Category", "SurvivorChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkableInteractionTags = { "_linkableInteractionTags", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _linkableInteractionTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkableInteractionTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkableInteractionTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationDuration_MetaData[] = {
		{ "Category", "SurvivorChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationDuration = { "_immobilizationDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _immobilizationDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__pullbackAngle_MetaData[] = {
		{ "Category", "SurvivorChainLinkableComponent" },
		{ "ModuleRelativePath", "Public/SurvivorChainLinkableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__pullbackAngle = { "_pullbackAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorChainLinkableComponent, _pullbackAngle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__pullbackAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__pullbackAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkedMoveInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationEffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__velocityAdditiveStrategyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__cancelableInteractionTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__linkableInteractionTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__immobilizationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::NewProp__pullbackAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorChainLinkableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::ClassParams = {
		&USurvivorChainLinkableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorChainLinkableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorChainLinkableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorChainLinkableComponent, 822355527);
	template<> THEGUNSLINGER_API UClass* StaticClass<USurvivorChainLinkableComponent>()
	{
		return USurvivorChainLinkableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorChainLinkableComponent(Z_Construct_UClass_USurvivorChainLinkableComponent, &USurvivorChainLinkableComponent::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("USurvivorChainLinkableComponent"), false, nullptr, nullptr, nullptr);

	void USurvivorChainLinkableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__linkedMoveInput(TEXT("_linkedMoveInput"));
		static const FName Name__velocityAdditiveStrategy(TEXT("_velocityAdditiveStrategy"));

		const bool bIsValid = true
			&& Name__linkedMoveInput == ClassReps[(int32)ENetFields_Private::_linkedMoveInput].Property->GetFName()
			&& Name__velocityAdditiveStrategy == ClassReps[(int32)ENetFields_Private::_velocityAdditiveStrategy].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USurvivorChainLinkableComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorChainLinkableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
