// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperSlashableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperSlashableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperSlashableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperSlashableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlashableActivationSourceCollection_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlashableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCamperSlashableComponent::execSetCrouchCapsuleHalfHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrouchCapsuleHalfHeight(Z_Param_height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperSlashableComponent::execSetHookSlashableZone)
	{
		P_GET_OBJECT(UCapsuleComponent,Z_Param_zone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHookSlashableZone(Z_Param_zone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperSlashableComponent::execSetSlashableZone)
	{
		P_GET_OBJECT(UCapsuleComponent,Z_Param_zone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlashableZone(Z_Param_zone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperSlashableComponent::execSetStandingCapsuleHalfHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStandingCapsuleHalfHeight(Z_Param_height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperSlashableComponent::execSetUseCrouchSlashableCapsule)
	{
		P_GET_UBOOL(Z_Param_useCrouchCapsule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCrouchSlashableCapsule(Z_Param_useCrouchCapsule);
		P_NATIVE_END;
	}
	void UCamperSlashableComponent::StaticRegisterNativesUCamperSlashableComponent()
	{
		UClass* Class = UCamperSlashableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCrouchCapsuleHalfHeight", &UCamperSlashableComponent::execSetCrouchCapsuleHalfHeight },
			{ "SetHookSlashableZone", &UCamperSlashableComponent::execSetHookSlashableZone },
			{ "SetSlashableZone", &UCamperSlashableComponent::execSetSlashableZone },
			{ "SetStandingCapsuleHalfHeight", &UCamperSlashableComponent::execSetStandingCapsuleHalfHeight },
			{ "SetUseCrouchSlashableCapsule", &UCamperSlashableComponent::execSetUseCrouchSlashableCapsule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics
	{
		struct CamperSlashableComponent_eventSetCrouchCapsuleHalfHeight_Parms
		{
			float height;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperSlashableComponent_eventSetCrouchCapsuleHalfHeight_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::NewProp_height,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperSlashableComponent, nullptr, "SetCrouchCapsuleHalfHeight", nullptr, nullptr, sizeof(CamperSlashableComponent_eventSetCrouchCapsuleHalfHeight_Parms), Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics
	{
		struct CamperSlashableComponent_eventSetHookSlashableZone_Parms
		{
			UCapsuleComponent* zone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::NewProp_zone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperSlashableComponent_eventSetHookSlashableZone_Parms, zone), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::NewProp_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::NewProp_zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::NewProp_zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperSlashableComponent, nullptr, "SetHookSlashableZone", nullptr, nullptr, sizeof(CamperSlashableComponent_eventSetHookSlashableZone_Parms), Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics
	{
		struct CamperSlashableComponent_eventSetSlashableZone_Parms
		{
			UCapsuleComponent* zone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::NewProp_zone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperSlashableComponent_eventSetSlashableZone_Parms, zone), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::NewProp_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::NewProp_zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::NewProp_zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperSlashableComponent, nullptr, "SetSlashableZone", nullptr, nullptr, sizeof(CamperSlashableComponent_eventSetSlashableZone_Parms), Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics
	{
		struct CamperSlashableComponent_eventSetStandingCapsuleHalfHeight_Parms
		{
			float height;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperSlashableComponent_eventSetStandingCapsuleHalfHeight_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::NewProp_height,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperSlashableComponent, nullptr, "SetStandingCapsuleHalfHeight", nullptr, nullptr, sizeof(CamperSlashableComponent_eventSetStandingCapsuleHalfHeight_Parms), Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics
	{
		struct CamperSlashableComponent_eventSetUseCrouchSlashableCapsule_Parms
		{
			bool useCrouchCapsule;
		};
		static void NewProp_useCrouchCapsule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useCrouchCapsule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::NewProp_useCrouchCapsule_SetBit(void* Obj)
	{
		((CamperSlashableComponent_eventSetUseCrouchSlashableCapsule_Parms*)Obj)->useCrouchCapsule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::NewProp_useCrouchCapsule = { "useCrouchCapsule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CamperSlashableComponent_eventSetUseCrouchSlashableCapsule_Parms), &Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::NewProp_useCrouchCapsule_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::NewProp_useCrouchCapsule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperSlashableComponent, nullptr, "SetUseCrouchSlashableCapsule", nullptr, nullptr, sizeof(CamperSlashableComponent_eventSetUseCrouchSlashableCapsule_Parms), Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCamperSlashableComponent_NoRegister()
	{
		return UCamperSlashableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCamperSlashableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slashableActivationSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__slashableActivationSources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sourceActivationLingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sourceActivationLingerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slashableDisablingStateTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__slashableDisablingStateTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crouchCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__crouchCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__standingCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__standingCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookSlashableZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookSlashableZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slashableZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__slashableZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCamperSlashableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCamperSlashableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamperSlashableComponent_SetCrouchCapsuleHalfHeight, "SetCrouchCapsuleHalfHeight" }, // 2979445618
		{ &Z_Construct_UFunction_UCamperSlashableComponent_SetHookSlashableZone, "SetHookSlashableZone" }, // 4179880272
		{ &Z_Construct_UFunction_UCamperSlashableComponent_SetSlashableZone, "SetSlashableZone" }, // 399490528
		{ &Z_Construct_UFunction_UCamperSlashableComponent_SetStandingCapsuleHalfHeight, "SetStandingCapsuleHalfHeight" }, // 2706068915
		{ &Z_Construct_UFunction_UCamperSlashableComponent_SetUseCrouchSlashableCapsule, "SetUseCrouchSlashableCapsule" }, // 3448917715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CamperSlashableComponent.h" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableActivationSources_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableActivationSources = { "_slashableActivationSources", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperSlashableComponent, _slashableActivationSources), Z_Construct_UClass_USlashableActivationSourceCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableActivationSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableActivationSources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__sourceActivationLingerDuration_MetaData[] = {
		{ "Category", "CamperSlashableComponent" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__sourceActivationLingerDuration = { "_sourceActivationLingerDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperSlashableComponent, _sourceActivationLingerDuration), METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__sourceActivationLingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__sourceActivationLingerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableDisablingStateTags_MetaData[] = {
		{ "Category", "CamperSlashableComponent" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableDisablingStateTags = { "_slashableDisablingStateTags", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperSlashableComponent, _slashableDisablingStateTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableDisablingStateTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableDisablingStateTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__crouchCapsuleHalfHeight_MetaData[] = {
		{ "Category", "CamperSlashableComponent" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__crouchCapsuleHalfHeight = { "_crouchCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperSlashableComponent, _crouchCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__crouchCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__crouchCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__standingCapsuleHalfHeight_MetaData[] = {
		{ "Category", "CamperSlashableComponent" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__standingCapsuleHalfHeight = { "_standingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperSlashableComponent, _standingCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__standingCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__standingCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__hookSlashableZone_MetaData[] = {
		{ "Category", "CamperSlashableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__hookSlashableZone = { "_hookSlashableZone", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperSlashableComponent, _hookSlashableZone), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__hookSlashableZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__hookSlashableZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableZone_MetaData[] = {
		{ "Category", "CamperSlashableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperSlashableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableZone = { "_slashableZone", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperSlashableComponent, _slashableZone), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamperSlashableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableActivationSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__sourceActivationLingerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableDisablingStateTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__crouchCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__standingCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__hookSlashableZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperSlashableComponent_Statics::NewProp__slashableZone,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCamperSlashableComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USlashableInterface_NoRegister, (int32)VTABLE_OFFSET(UCamperSlashableComponent, ISlashableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCamperSlashableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamperSlashableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCamperSlashableComponent_Statics::ClassParams = {
		&UCamperSlashableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCamperSlashableComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCamperSlashableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperSlashableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCamperSlashableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCamperSlashableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCamperSlashableComponent, 4099329769);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCamperSlashableComponent>()
	{
		return UCamperSlashableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamperSlashableComponent(Z_Construct_UClass_UCamperSlashableComponent, &UCamperSlashableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCamperSlashableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamperSlashableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
