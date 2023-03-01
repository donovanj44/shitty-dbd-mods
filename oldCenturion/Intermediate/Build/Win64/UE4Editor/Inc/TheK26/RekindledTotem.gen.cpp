// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/RekindledTotem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRekindledTotem() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_ARekindledTotem_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_ARekindledTotem();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETotemState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(ARekindledTotem::execOnParentTotemEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_endPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParentTotemEndPlay(Z_Param_actor,EEndPlayReason::Type(Z_Param_endPlayReason));
		P_NATIVE_END;
	}
	static FName NAME_ARekindledTotem_CleanseTotem = FName(TEXT("CleanseTotem"));
	void ARekindledTotem::CleanseTotem(ATotem* totem, const ETotemState oldTotemState)
	{
		RekindledTotem_eventCleanseTotem_Parms Parms;
		Parms.totem=totem;
		Parms.oldTotemState=oldTotemState;
		ProcessEvent(FindFunctionChecked(NAME_ARekindledTotem_CleanseTotem),&Parms);
	}
	static FName NAME_ARekindledTotem_Cosmetic_HideShadowTotem = FName(TEXT("Cosmetic_HideShadowTotem"));
	void ARekindledTotem::Cosmetic_HideShadowTotem(bool instant)
	{
		RekindledTotem_eventCosmetic_HideShadowTotem_Parms Parms;
		Parms.instant=instant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ARekindledTotem_Cosmetic_HideShadowTotem),&Parms);
	}
	static FName NAME_ARekindledTotem_Cosmetic_ShowShadowTotem = FName(TEXT("Cosmetic_ShowShadowTotem"));
	void ARekindledTotem::Cosmetic_ShowShadowTotem(bool instant)
	{
		RekindledTotem_eventCosmetic_ShowShadowTotem_Parms Parms;
		Parms.instant=instant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ARekindledTotem_Cosmetic_ShowShadowTotem),&Parms);
	}
	static FName NAME_ARekindledTotem_RebuildTotem = FName(TEXT("RebuildTotem"));
	void ARekindledTotem::RebuildTotem(ATotem* totem)
	{
		RekindledTotem_eventRebuildTotem_Parms Parms;
		Parms.totem=totem;
		ProcessEvent(FindFunctionChecked(NAME_ARekindledTotem_RebuildTotem),&Parms);
	}
	void ARekindledTotem::StaticRegisterNativesARekindledTotem()
	{
		UClass* Class = ARekindledTotem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnParentTotemEndPlay", &ARekindledTotem::execOnParentTotemEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldTotemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldTotemState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldTotemState_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_totem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_oldTotemState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_oldTotemState = { "oldTotemState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RekindledTotem_eventCleanseTotem_Parms, oldTotemState), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_oldTotemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_oldTotemState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_oldTotemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_totem = { "totem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RekindledTotem_eventCleanseTotem_Parms, totem), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_oldTotemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_oldTotemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::NewProp_totem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARekindledTotem, nullptr, "CleanseTotem", nullptr, nullptr, sizeof(RekindledTotem_eventCleanseTotem_Parms), Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARekindledTotem_CleanseTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARekindledTotem_CleanseTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics
	{
		static void NewProp_instant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_instant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::NewProp_instant_SetBit(void* Obj)
	{
		((RekindledTotem_eventCosmetic_HideShadowTotem_Parms*)Obj)->instant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::NewProp_instant = { "instant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RekindledTotem_eventCosmetic_HideShadowTotem_Parms), &Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::NewProp_instant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::NewProp_instant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARekindledTotem, nullptr, "Cosmetic_HideShadowTotem", nullptr, nullptr, sizeof(RekindledTotem_eventCosmetic_HideShadowTotem_Parms), Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics
	{
		static void NewProp_instant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_instant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::NewProp_instant_SetBit(void* Obj)
	{
		((RekindledTotem_eventCosmetic_ShowShadowTotem_Parms*)Obj)->instant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::NewProp_instant = { "instant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RekindledTotem_eventCosmetic_ShowShadowTotem_Parms), &Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::NewProp_instant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::NewProp_instant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARekindledTotem, nullptr, "Cosmetic_ShowShadowTotem", nullptr, nullptr, sizeof(RekindledTotem_eventCosmetic_ShowShadowTotem_Parms), Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics
	{
		struct RekindledTotem_eventOnParentTotemEndPlay_Parms
		{
			AActor* actor;
			TEnumAsByte<EEndPlayReason::Type> endPlayReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_endPlayReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::NewProp_endPlayReason = { "endPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RekindledTotem_eventOnParentTotemEndPlay_Parms, endPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RekindledTotem_eventOnParentTotemEndPlay_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::NewProp_endPlayReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARekindledTotem, nullptr, "OnParentTotemEndPlay", nullptr, nullptr, sizeof(RekindledTotem_eventOnParentTotemEndPlay_Parms), Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_totem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::NewProp_totem = { "totem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RekindledTotem_eventRebuildTotem_Parms, totem), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::NewProp_totem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARekindledTotem, nullptr, "RebuildTotem", nullptr, nullptr, sizeof(RekindledTotem_eventRebuildTotem_Parms), Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARekindledTotem_RebuildTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARekindledTotem_RebuildTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARekindledTotem_NoRegister()
	{
		return ARekindledTotem::StaticClass();
	}
	struct Z_Construct_UClass_ARekindledTotem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__auraColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARekindledTotem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARekindledTotem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARekindledTotem_CleanseTotem, "CleanseTotem" }, // 3668691685
		{ &Z_Construct_UFunction_ARekindledTotem_Cosmetic_HideShadowTotem, "Cosmetic_HideShadowTotem" }, // 3027576171
		{ &Z_Construct_UFunction_ARekindledTotem_Cosmetic_ShowShadowTotem, "Cosmetic_ShowShadowTotem" }, // 1104526640
		{ &Z_Construct_UFunction_ARekindledTotem_OnParentTotemEndPlay, "OnParentTotemEndPlay" }, // 3935963068
		{ &Z_Construct_UFunction_ARekindledTotem_RebuildTotem, "RebuildTotem" }, // 2445616187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARekindledTotem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "RekindledTotem.h" },
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "RekindledTotem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARekindledTotem, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineStrategy_MetaData[] = {
		{ "Category", "RekindledTotem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineStrategy = { "_outlineStrategy", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARekindledTotem, _outlineStrategy), Z_Construct_UClass_USourceBasedOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARekindledTotem_Statics::NewProp__auraColor_MetaData[] = {
		{ "Category", "RekindledTotem" },
		{ "ModuleRelativePath", "Public/RekindledTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARekindledTotem_Statics::NewProp__auraColor = { "_auraColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARekindledTotem, _auraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ARekindledTotem_Statics::NewProp__auraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARekindledTotem_Statics::NewProp__auraColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARekindledTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARekindledTotem_Statics::NewProp__outlineStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARekindledTotem_Statics::NewProp__auraColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARekindledTotem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARekindledTotem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARekindledTotem_Statics::ClassParams = {
		&ARekindledTotem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARekindledTotem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARekindledTotem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARekindledTotem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARekindledTotem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARekindledTotem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARekindledTotem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARekindledTotem, 2343237939);
	template<> THEK26_API UClass* StaticClass<ARekindledTotem>()
	{
		return ARekindledTotem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARekindledTotem(Z_Construct_UClass_ARekindledTotem, &ARekindledTotem::StaticClass, TEXT("/Script/TheK26"), TEXT("ARekindledTotem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARekindledTotem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
