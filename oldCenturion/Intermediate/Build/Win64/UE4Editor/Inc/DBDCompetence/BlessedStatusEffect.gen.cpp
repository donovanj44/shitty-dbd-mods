// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/BlessedStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlessedStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBlessedStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBlessedStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlessedVignetteController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlessedStatusEffect::execAuthority_OnSurvivorRemovedFromGame)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorRemovedFromGame(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlessedStatusEffect::execGetBoonTotemBlessingRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoonTotemBlessingRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlessedStatusEffect::execGetBoundTotem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATotem**)Z_Param__Result=P_THIS->GetBoundTotem();
		P_NATIVE_END;
	}
	static FName NAME_UBlessedStatusEffect_OnEnterBoonRange = FName(TEXT("OnEnterBoonRange"));
	void UBlessedStatusEffect::OnEnterBoonRange()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBlessedStatusEffect_OnEnterBoonRange),NULL);
	}
	static FName NAME_UBlessedStatusEffect_OnExitBoonRange = FName(TEXT("OnExitBoonRange"));
	void UBlessedStatusEffect::OnExitBoonRange()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBlessedStatusEffect_OnExitBoonRange),NULL);
	}
	void UBlessedStatusEffect::StaticRegisterNativesUBlessedStatusEffect()
	{
		UClass* Class = UBlessedStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorRemovedFromGame", &UBlessedStatusEffect::execAuthority_OnSurvivorRemovedFromGame },
			{ "GetBoonTotemBlessingRange", &UBlessedStatusEffect::execGetBoonTotemBlessingRange },
			{ "GetBoundTotem", &UBlessedStatusEffect::execGetBoundTotem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics
	{
		struct BlessedStatusEffect_eventAuthority_OnSurvivorRemovedFromGame_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlessedStatusEffect_eventAuthority_OnSurvivorRemovedFromGame_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessedStatusEffect, nullptr, "Authority_OnSurvivorRemovedFromGame", nullptr, nullptr, sizeof(BlessedStatusEffect_eventAuthority_OnSurvivorRemovedFromGame_Parms), Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics
	{
		struct BlessedStatusEffect_eventGetBoonTotemBlessingRange_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlessedStatusEffect_eventGetBoonTotemBlessingRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessedStatusEffect, nullptr, "GetBoonTotemBlessingRange", nullptr, nullptr, sizeof(BlessedStatusEffect_eventGetBoonTotemBlessingRange_Parms), Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics
	{
		struct BlessedStatusEffect_eventGetBoundTotem_Parms
		{
			ATotem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlessedStatusEffect_eventGetBoundTotem_Parms, ReturnValue), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessedStatusEffect, nullptr, "GetBoundTotem", nullptr, nullptr, sizeof(BlessedStatusEffect_eventGetBoundTotem_Parms), Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessedStatusEffect, nullptr, "OnEnterBoonRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessedStatusEffect, nullptr, "OnExitBoonRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlessedStatusEffect_NoRegister()
	{
		return UBlessedStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBlessedStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteControllerBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__vignetteControllerBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlessedStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlessedStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame, "Authority_OnSurvivorRemovedFromGame" }, // 3343675232
		{ &Z_Construct_UFunction_UBlessedStatusEffect_GetBoonTotemBlessingRange, "GetBoonTotemBlessingRange" }, // 1269018744
		{ &Z_Construct_UFunction_UBlessedStatusEffect_GetBoundTotem, "GetBoundTotem" }, // 2368307956
		{ &Z_Construct_UFunction_UBlessedStatusEffect_OnEnterBoonRange, "OnEnterBoonRange" }, // 1124157624
		{ &Z_Construct_UFunction_UBlessedStatusEffect_OnExitBoonRange, "OnExitBoonRange" }, // 532135205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlessedStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlessedStatusEffect.h" },
		{ "ModuleRelativePath", "Public/BlessedStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlessedStatusEffect_Statics::NewProp__vignetteControllerBlueprint_MetaData[] = {
		{ "Category", "BlessedStatusEffect" },
		{ "ModuleRelativePath", "Public/BlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlessedStatusEffect_Statics::NewProp__vignetteControllerBlueprint = { "_vignetteControllerBlueprint", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlessedStatusEffect, _vignetteControllerBlueprint), Z_Construct_UClass_UBlessedVignetteController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlessedStatusEffect_Statics::NewProp__vignetteControllerBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlessedStatusEffect_Statics::NewProp__vignetteControllerBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlessedStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlessedStatusEffect_Statics::NewProp__vignetteControllerBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlessedStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlessedStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlessedStatusEffect_Statics::ClassParams = {
		&UBlessedStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlessedStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlessedStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlessedStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlessedStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlessedStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlessedStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlessedStatusEffect, 34275823);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UBlessedStatusEffect>()
	{
		return UBlessedStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlessedStatusEffect(Z_Construct_UClass_UBlessedStatusEffect, &UBlessedStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UBlessedStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlessedStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
