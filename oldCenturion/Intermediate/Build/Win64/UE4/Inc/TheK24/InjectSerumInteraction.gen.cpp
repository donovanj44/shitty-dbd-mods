// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/InjectSerumInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInjectSerumInteraction() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UInjectSerumInteraction_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UInjectSerumInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UInjectSerumInteraction::execAuthority_CureSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_camperPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CureSurvivor(Z_Param_camperPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInjectSerumInteraction::execGetInjectionTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetInjectionTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInjectSerumInteraction::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	static FName NAME_UInjectSerumInteraction_OnSurvivorCured_Cosmetic = FName(TEXT("OnSurvivorCured_Cosmetic"));
	void UInjectSerumInteraction::OnSurvivorCured_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInjectSerumInteraction_OnSurvivorCured_Cosmetic),NULL);
	}
	void UInjectSerumInteraction::StaticRegisterNativesUInjectSerumInteraction()
	{
		UClass* Class = UInjectSerumInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_CureSurvivor", &UInjectSerumInteraction::execAuthority_CureSurvivor },
			{ "GetInjectionTarget", &UInjectSerumInteraction::execGetInjectionTarget },
			{ "OnKillerSet", &UInjectSerumInteraction::execOnKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics
	{
		struct InjectSerumInteraction_eventAuthority_CureSurvivor_Parms
		{
			ACamperPlayer* camperPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::NewProp_camperPlayer = { "camperPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InjectSerumInteraction_eventAuthority_CureSurvivor_Parms, camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::NewProp_camperPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInjectSerumInteraction, nullptr, "Authority_CureSurvivor", nullptr, nullptr, sizeof(InjectSerumInteraction_eventAuthority_CureSurvivor_Parms), Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics
	{
		struct InjectSerumInteraction_eventGetInjectionTarget_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InjectSerumInteraction_eventGetInjectionTarget_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInjectSerumInteraction, nullptr, "GetInjectionTarget", nullptr, nullptr, sizeof(InjectSerumInteraction_eventGetInjectionTarget_Parms), Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics
	{
		struct InjectSerumInteraction_eventOnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InjectSerumInteraction_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInjectSerumInteraction, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(InjectSerumInteraction_eventOnKillerSet_Parms), Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInjectSerumInteraction, nullptr, "OnSurvivorCured_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInjectSerumInteraction_NoRegister()
	{
		return UInjectSerumInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UInjectSerumInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__serumApplyHeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__serumApplyHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scoreEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__scoreEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__injectSerumKillerInstinctTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__injectSerumKillerInstinctTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInjectSerumInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInjectSerumInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInjectSerumInteraction_Authority_CureSurvivor, "Authority_CureSurvivor" }, // 150032400
		{ &Z_Construct_UFunction_UInjectSerumInteraction_GetInjectionTarget, "GetInjectionTarget" }, // 3091544848
		{ &Z_Construct_UFunction_UInjectSerumInteraction_OnKillerSet, "OnKillerSet" }, // 1288264452
		{ &Z_Construct_UFunction_UInjectSerumInteraction_OnSurvivorCured_Cosmetic, "OnSurvivorCured_Cosmetic" }, // 2428996308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInjectSerumInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InjectSerumInteraction.h" },
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__serumApplyHeal_MetaData[] = {
		{ "Category", "InjectSerumInteraction" },
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__serumApplyHeal = { "_serumApplyHeal", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInjectSerumInteraction, _serumApplyHeal), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__serumApplyHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__serumApplyHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__scoreEvent_MetaData[] = {
		{ "Category", "InjectSerumInteraction" },
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__scoreEvent = { "_scoreEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInjectSerumInteraction, _scoreEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__scoreEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__scoreEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__injectSerumKillerInstinctTime_MetaData[] = {
		{ "Category", "InjectSerumInteraction" },
		{ "ModuleRelativePath", "Public/InjectSerumInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__injectSerumKillerInstinctTime = { "_injectSerumKillerInstinctTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInjectSerumInteraction, _injectSerumKillerInstinctTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__injectSerumKillerInstinctTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__injectSerumKillerInstinctTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInjectSerumInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__serumApplyHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__scoreEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInjectSerumInteraction_Statics::NewProp__injectSerumKillerInstinctTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInjectSerumInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInjectSerumInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInjectSerumInteraction_Statics::ClassParams = {
		&UInjectSerumInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInjectSerumInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInjectSerumInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInjectSerumInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInjectSerumInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInjectSerumInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInjectSerumInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInjectSerumInteraction, 1605151882);
	template<> THEK24_API UClass* StaticClass<UInjectSerumInteraction>()
	{
		return UInjectSerumInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInjectSerumInteraction(Z_Construct_UClass_UInjectSerumInteraction, &UInjectSerumInteraction::StaticClass, TEXT("/Script/TheK24"), TEXT("UInjectSerumInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInjectSerumInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
