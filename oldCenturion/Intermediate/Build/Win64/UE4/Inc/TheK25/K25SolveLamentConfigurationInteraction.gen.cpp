// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SolveLamentConfigurationInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SolveLamentConfigurationInteraction() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SolveLamentConfigurationInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UK25SolveLamentConfigurationInteraction::execAuthority_OnSkillCheckResponseAuthority)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_UBOOL(Z_Param_triggerLoudNoise);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSkillCheckResponseAuthority(Z_Param_success,Z_Param_bonus,Z_Param_player,Z_Param_triggerLoudNoise,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	void UK25SolveLamentConfigurationInteraction::StaticRegisterNativesUK25SolveLamentConfigurationInteraction()
	{
		UClass* Class = UK25SolveLamentConfigurationInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSkillCheckResponseAuthority", &UK25SolveLamentConfigurationInteraction::execAuthority_OnSkillCheckResponseAuthority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics
	{
		struct K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms
		{
			bool success;
			bool bonus;
			ADBDPlayer* player;
			bool triggerLoudNoise;
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static void NewProp_triggerLoudNoise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_triggerLoudNoise;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_triggerLoudNoise_SetBit(void* Obj)
	{
		((K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms*)Obj)->triggerLoudNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_triggerLoudNoise = { "triggerLoudNoise", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms), &Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_triggerLoudNoise_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms), &Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_success_SetBit(void* Obj)
	{
		((K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms), &Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_triggerLoudNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SolveLamentConfigurationInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25SolveLamentConfigurationInteraction, nullptr, "Authority_OnSkillCheckResponseAuthority", nullptr, nullptr, sizeof(K25SolveLamentConfigurationInteraction_eventAuthority_OnSkillCheckResponseAuthority_Parms), Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_NoRegister()
	{
		return UK25SolveLamentConfigurationInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__failMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__failMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__failSkillCheckTimePenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__failSkillCheckTimePenalty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBufferBeforeAllowedToUseInteractionAgain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeBufferBeforeAllowedToUseInteractionAgain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority, "Authority_OnSkillCheckResponseAuthority" }, // 2447179885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K25SolveLamentConfigurationInteraction.h" },
		{ "ModuleRelativePath", "Public/K25SolveLamentConfigurationInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failMontage_MetaData[] = {
		{ "Category", "K25SolveLamentConfigurationInteraction" },
		{ "ModuleRelativePath", "Public/K25SolveLamentConfigurationInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failMontage = { "_failMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SolveLamentConfigurationInteraction, _failMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failSkillCheckTimePenalty_MetaData[] = {
		{ "Category", "K25SolveLamentConfigurationInteraction" },
		{ "ModuleRelativePath", "Public/K25SolveLamentConfigurationInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failSkillCheckTimePenalty = { "_failSkillCheckTimePenalty", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SolveLamentConfigurationInteraction, _failSkillCheckTimePenalty), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failSkillCheckTimePenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failSkillCheckTimePenalty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__timeBufferBeforeAllowedToUseInteractionAgain_MetaData[] = {
		{ "Category", "K25SolveLamentConfigurationInteraction" },
		{ "ModuleRelativePath", "Public/K25SolveLamentConfigurationInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__timeBufferBeforeAllowedToUseInteractionAgain = { "_timeBufferBeforeAllowedToUseInteractionAgain", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SolveLamentConfigurationInteraction, _timeBufferBeforeAllowedToUseInteractionAgain), METADATA_PARAMS(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__timeBufferBeforeAllowedToUseInteractionAgain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__timeBufferBeforeAllowedToUseInteractionAgain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__failSkillCheckTimePenalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::NewProp__timeBufferBeforeAllowedToUseInteractionAgain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25SolveLamentConfigurationInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::ClassParams = {
		&UK25SolveLamentConfigurationInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25SolveLamentConfigurationInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25SolveLamentConfigurationInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25SolveLamentConfigurationInteraction, 3467712157);
	template<> THEK25_API UClass* StaticClass<UK25SolveLamentConfigurationInteraction>()
	{
		return UK25SolveLamentConfigurationInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25SolveLamentConfigurationInteraction(Z_Construct_UClass_UK25SolveLamentConfigurationInteraction, &UK25SolveLamentConfigurationInteraction::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25SolveLamentConfigurationInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25SolveLamentConfigurationInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
