// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/SearchChestInteractionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSearchChestInteractionBase() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_USearchChestInteractionBase_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_USearchChestInteractionBase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASearchable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(USearchChestInteractionBase::execFireChestScoreEvent)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireChestScoreEvent(Z_Param_player);
		P_NATIVE_END;
	}
	void USearchChestInteractionBase::StaticRegisterNativesUSearchChestInteractionBase()
	{
		UClass* Class = USearchChestInteractionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireChestScoreEvent", &USearchChestInteractionBase::execFireChestScoreEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics
	{
		struct SearchChestInteractionBase_eventFireChestScoreEvent_Parms
		{
			const ADBDPlayer* player;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SearchChestInteractionBase_eventFireChestScoreEvent_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SearchChestInteractionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USearchChestInteractionBase, nullptr, "FireChestScoreEvent", nullptr, nullptr, sizeof(SearchChestInteractionBase_eventFireChestScoreEvent_Parms), Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USearchChestInteractionBase_NoRegister()
	{
		return USearchChestInteractionBase::StaticClass();
	}
	struct Z_Construct_UClass_USearchChestInteractionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onLastInteractionWasComplete_MetaData[];
#endif
		static void NewProp__onLastInteractionWasComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__onLastInteractionWasComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningChest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningChest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scoreEventFired_MetaData[];
#endif
		static void NewProp__scoreEventFired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__scoreEventFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__searchableCompleteContributionPercentTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__searchableCompleteContributionPercentTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__handleCompletionScoreEvents_MetaData[];
#endif
		static void NewProp__handleCompletionScoreEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__handleCompletionScoreEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USearchChestInteractionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USearchChestInteractionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USearchChestInteractionBase_FireChestScoreEvent, "FireChestScoreEvent" }, // 3113210291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchChestInteractionBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SearchChestInteractionBase.h" },
		{ "ModuleRelativePath", "Public/SearchChestInteractionBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__onLastInteractionWasComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/SearchChestInteractionBase.h" },
	};
#endif
	void Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__onLastInteractionWasComplete_SetBit(void* Obj)
	{
		((USearchChestInteractionBase*)Obj)->_onLastInteractionWasComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__onLastInteractionWasComplete = { "_onLastInteractionWasComplete", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USearchChestInteractionBase), &Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__onLastInteractionWasComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__onLastInteractionWasComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__onLastInteractionWasComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__owningChest_MetaData[] = {
		{ "ModuleRelativePath", "Public/SearchChestInteractionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__owningChest = { "_owningChest", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USearchChestInteractionBase, _owningChest), Z_Construct_UClass_ASearchable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__owningChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__owningChest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__scoreEventFired_MetaData[] = {
		{ "ModuleRelativePath", "Public/SearchChestInteractionBase.h" },
	};
#endif
	void Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__scoreEventFired_SetBit(void* Obj)
	{
		((USearchChestInteractionBase*)Obj)->_scoreEventFired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__scoreEventFired = { "_scoreEventFired", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USearchChestInteractionBase), &Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__scoreEventFired_SetBit, METADATA_PARAMS(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__scoreEventFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__scoreEventFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__searchableCompleteContributionPercentTag_MetaData[] = {
		{ "Category", "SearchChestInteractionBase" },
		{ "ModuleRelativePath", "Public/SearchChestInteractionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__searchableCompleteContributionPercentTag = { "_searchableCompleteContributionPercentTag", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USearchChestInteractionBase, _searchableCompleteContributionPercentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__searchableCompleteContributionPercentTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__searchableCompleteContributionPercentTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__handleCompletionScoreEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/SearchChestInteractionBase.h" },
	};
#endif
	void Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__handleCompletionScoreEvents_SetBit(void* Obj)
	{
		((USearchChestInteractionBase*)Obj)->_handleCompletionScoreEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__handleCompletionScoreEvents = { "_handleCompletionScoreEvents", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USearchChestInteractionBase), &Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__handleCompletionScoreEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__handleCompletionScoreEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__handleCompletionScoreEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USearchChestInteractionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__onLastInteractionWasComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__owningChest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__scoreEventFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__searchableCompleteContributionPercentTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchChestInteractionBase_Statics::NewProp__handleCompletionScoreEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USearchChestInteractionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USearchChestInteractionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USearchChestInteractionBase_Statics::ClassParams = {
		&USearchChestInteractionBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USearchChestInteractionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USearchChestInteractionBase_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USearchChestInteractionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USearchChestInteractionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USearchChestInteractionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USearchChestInteractionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USearchChestInteractionBase, 18631873);
	template<> DBDINTERACTION_API UClass* StaticClass<USearchChestInteractionBase>()
	{
		return USearchChestInteractionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USearchChestInteractionBase(Z_Construct_UClass_USearchChestInteractionBase, &USearchChestInteractionBase::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("USearchChestInteractionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USearchChestInteractionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
