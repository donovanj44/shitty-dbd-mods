// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDAIBTController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAIBTController() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_ADBDAIBTController_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_ADBDAIBTController();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIController();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIGoalComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIStateComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDNavMeshExplorerComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDBehaviorTreeComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDPathFollowingComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDBlackboardComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIPerceptionComponent_NoRegister();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAISkillPerk();
// End Cross Module References
	DEFINE_FUNCTION(ADBDAIBTController::execAuthority_FinishedPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_FinishedPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDAIBTController::execOnPawnBump)
	{
		P_GET_OBJECT(AActor,Z_Param_selfActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_STRUCT(FVector,Z_Param_normalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnBump(Z_Param_selfActor,Z_Param_otherActor,Z_Param_normalImpulse,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	void ADBDAIBTController::StaticRegisterNativesADBDAIBTController()
	{
		UClass* Class = ADBDAIBTController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_FinishedPlaying", &ADBDAIBTController::execAuthority_FinishedPlaying },
			{ "OnPawnBump", &ADBDAIBTController::execOnPawnBump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIBTController, nullptr, "Authority_FinishedPlaying", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics
	{
		struct DBDAIBTController_eventOnPawnBump_Parms
		{
			AActor* selfActor;
			AActor* otherActor;
			FVector normalImpulse;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selfActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIBTController_eventOnPawnBump_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIBTController_eventOnPawnBump_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIBTController_eventOnPawnBump_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_selfActor = { "selfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIBTController_eventOnPawnBump_Parms, selfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_normalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::NewProp_selfActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIBTController, nullptr, "OnPawnBump", nullptr, nullptr, sizeof(DBDAIBTController_eventOnPawnBump_Parms), Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIBTController_OnPawnBump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIBTController_OnPawnBump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDAIBTController_NoRegister()
	{
		return ADBDAIBTController::StaticClass();
	}
	struct Z_Construct_UClass_ADBDAIBTController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiSkills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__aiSkills;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiSkills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__setDynamicSubtrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__setDynamicSubtrees;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__setDynamicSubtrees_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__setDynamicSubtrees_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navMeshExplorer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__navMeshExplorer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdBehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdPathFollowing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdPathFollowing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdBlackboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdBlackboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdPerception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdPerception;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenToAttackEvents_MetaData[];
#endif
		static void NewProp_ListenToAttackEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ListenToAttackEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkSkills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkSkills;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkSkills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleSkills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoleSkills;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoleSkills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BaseSkills;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseSkills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDAIBTController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDAIBTController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDAIBTController_Authority_FinishedPlaying, "Authority_FinishedPlaying" }, // 3558318301
		{ &Z_Construct_UFunction_ADBDAIBTController_OnPawnBump, "OnPawnBump" }, // 3435008662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDAIBTController.h" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiSkills_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiSkills = { "_aiSkills", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _aiSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiSkills_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiSkills_Inner = { "_aiSkills", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees = { "_setDynamicSubtrees", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _setDynamicSubtrees), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees_Key_KeyProp = { "_setDynamicSubtrees_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees_ValueProp = { "_setDynamicSubtrees", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiGoal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDAIBTController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiGoal = { "_aiGoal", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _aiGoal), Z_Construct_UClass_UDBDAIGoalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDAIBTController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiState = { "_aiState", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _aiState), Z_Construct_UClass_UDBDAIStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__navMeshExplorer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDAIBTController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__navMeshExplorer = { "_navMeshExplorer", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _navMeshExplorer), Z_Construct_UClass_UDBDNavMeshExplorerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__navMeshExplorer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__navMeshExplorer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBehaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDAIBTController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBehaviorTree = { "_dbdBehaviorTree", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _dbdBehaviorTree), Z_Construct_UClass_UDBDBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPathFollowing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDAIBTController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPathFollowing = { "_dbdPathFollowing", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _dbdPathFollowing), Z_Construct_UClass_UDBDPathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPathFollowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPathFollowing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBlackboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDAIBTController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBlackboard = { "_dbdBlackboard", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _dbdBlackboard), Z_Construct_UClass_UDBDBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBlackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBlackboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPerception_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBDAIBTController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPerception = { "_dbdPerception", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, _dbdPerception), Z_Construct_UClass_UDBDAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPerception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPerception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_ListenToAttackEvents_MetaData[] = {
		{ "Category", "DBDAIBTController" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	void Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_ListenToAttackEvents_SetBit(void* Obj)
	{
		((ADBDAIBTController*)Obj)->ListenToAttackEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_ListenToAttackEvents = { "ListenToAttackEvents", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDAIBTController), &Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_ListenToAttackEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_ListenToAttackEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_ListenToAttackEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_PerkSkills_MetaData[] = {
		{ "Category", "DBDAIBTController" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_PerkSkills = { "PerkSkills", nullptr, (EPropertyFlags)0x0010008000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, PerkSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_PerkSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_PerkSkills_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_PerkSkills_Inner = { "PerkSkills", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAISkillPerk, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_RoleSkills_MetaData[] = {
		{ "Category", "DBDAIBTController" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_RoleSkills = { "RoleSkills", nullptr, (EPropertyFlags)0x001000000001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, RoleSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_RoleSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_RoleSkills_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_RoleSkills_Inner = { "RoleSkills", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BaseSkills_MetaData[] = {
		{ "Category", "DBDAIBTController" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BaseSkills = { "BaseSkills", nullptr, (EPropertyFlags)0x001000000001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, BaseSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BaseSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BaseSkills_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BaseSkills_Inner = { "BaseSkills", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "DBDAIBTController" },
		{ "ModuleRelativePath", "Public/DBDAIBTController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIBTController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDAIBTController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiSkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiSkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__setDynamicSubtrees_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__aiState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__navMeshExplorer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPathFollowing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdBlackboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp__dbdPerception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_ListenToAttackEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_PerkSkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_PerkSkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_RoleSkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_RoleSkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BaseSkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BaseSkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIBTController_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDAIBTController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDAIBTController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDAIBTController_Statics::ClassParams = {
		&ADBDAIBTController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDAIBTController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDAIBTController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIBTController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDAIBTController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDAIBTController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDAIBTController, 2792586470);
	template<> DBDBOTS_API UClass* StaticClass<ADBDAIBTController>()
	{
		return ADBDAIBTController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDAIBTController(Z_Construct_UClass_ADBDAIBTController, &ADBDAIBTController::StaticClass, TEXT("/Script/DBDBots"), TEXT("ADBDAIBTController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDAIBTController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
