// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaHeartbeatActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaHeartbeatActor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaHeartbeatActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaHeartbeatActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAtlantaHeartbeatActor::execOnLocallyObservedChanged)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged(Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_AAtlantaHeartbeatActor_HideHeartbeat = FName(TEXT("HideHeartbeat"));
	void AAtlantaHeartbeatActor::HideHeartbeat()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaHeartbeatActor_HideHeartbeat),NULL);
	}
	static FName NAME_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate = FName(TEXT("SetHeartbeatAnimationSpeedRate"));
	void AAtlantaHeartbeatActor::SetHeartbeatAnimationSpeedRate(float speedRate)
	{
		AtlantaHeartbeatActor_eventSetHeartbeatAnimationSpeedRate_Parms Parms;
		Parms.speedRate=speedRate;
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate),&Parms);
	}
	static FName NAME_AAtlantaHeartbeatActor_SetHeartbeatIntensity = FName(TEXT("SetHeartbeatIntensity"));
	void AAtlantaHeartbeatActor::SetHeartbeatIntensity(float heartbeatIntensity)
	{
		AtlantaHeartbeatActor_eventSetHeartbeatIntensity_Parms Parms;
		Parms.heartbeatIntensity=heartbeatIntensity;
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaHeartbeatActor_SetHeartbeatIntensity),&Parms);
	}
	static FName NAME_AAtlantaHeartbeatActor_ShowHeartbeat = FName(TEXT("ShowHeartbeat"));
	void AAtlantaHeartbeatActor::ShowHeartbeat()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaHeartbeatActor_ShowHeartbeat),NULL);
	}
	void AAtlantaHeartbeatActor::StaticRegisterNativesAAtlantaHeartbeatActor()
	{
		UClass* Class = AAtlantaHeartbeatActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLocallyObservedChanged", &AAtlantaHeartbeatActor::execOnLocallyObservedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHeartbeatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaHeartbeatActor, nullptr, "HideHeartbeat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics
	{
		struct AtlantaHeartbeatActor_eventOnLocallyObservedChanged_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaHeartbeatActor_eventOnLocallyObservedChanged_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHeartbeatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaHeartbeatActor, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, sizeof(AtlantaHeartbeatActor_eventOnLocallyObservedChanged_Parms), Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::NewProp_speedRate = { "speedRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaHeartbeatActor_eventSetHeartbeatAnimationSpeedRate_Parms, speedRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::NewProp_speedRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHeartbeatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaHeartbeatActor, nullptr, "SetHeartbeatAnimationSpeedRate", nullptr, nullptr, sizeof(AtlantaHeartbeatActor_eventSetHeartbeatAnimationSpeedRate_Parms), Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_heartbeatIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::NewProp_heartbeatIntensity = { "heartbeatIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaHeartbeatActor_eventSetHeartbeatIntensity_Parms, heartbeatIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::NewProp_heartbeatIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHeartbeatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaHeartbeatActor, nullptr, "SetHeartbeatIntensity", nullptr, nullptr, sizeof(AtlantaHeartbeatActor_eventSetHeartbeatIntensity_Parms), Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHeartbeatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaHeartbeatActor, nullptr, "ShowHeartbeat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtlantaHeartbeatActor_NoRegister()
	{
		return AAtlantaHeartbeatActor::StaticClass();
	}
	struct Z_Construct_UClass_AAtlantaHeartbeatActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHeartbeatShown_MetaData[];
#endif
		static void NewProp_IsHeartbeatShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHeartbeatShown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtlantaHeartbeatActor_HideHeartbeat, "HideHeartbeat" }, // 1015077082
		{ &Z_Construct_UFunction_AAtlantaHeartbeatActor_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 3567351044
		{ &Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatAnimationSpeedRate, "SetHeartbeatAnimationSpeedRate" }, // 574082282
		{ &Z_Construct_UFunction_AAtlantaHeartbeatActor_SetHeartbeatIntensity, "SetHeartbeatIntensity" }, // 708710597
		{ &Z_Construct_UFunction_AAtlantaHeartbeatActor_ShowHeartbeat, "ShowHeartbeat" }, // 291958454
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaHeartbeatActor.h" },
		{ "ModuleRelativePath", "Public/AtlantaHeartbeatActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::NewProp_IsHeartbeatShown_MetaData[] = {
		{ "Category", "AtlantaHeartbeatActor" },
		{ "ModuleRelativePath", "Public/AtlantaHeartbeatActor.h" },
	};
#endif
	void Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::NewProp_IsHeartbeatShown_SetBit(void* Obj)
	{
		((AAtlantaHeartbeatActor*)Obj)->IsHeartbeatShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::NewProp_IsHeartbeatShown = { "IsHeartbeatShown", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtlantaHeartbeatActor), &Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::NewProp_IsHeartbeatShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::NewProp_IsHeartbeatShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::NewProp_IsHeartbeatShown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::NewProp_IsHeartbeatShown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtlantaHeartbeatActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::ClassParams = {
		&AAtlantaHeartbeatActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtlantaHeartbeatActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtlantaHeartbeatActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtlantaHeartbeatActor, 2603238432);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AAtlantaHeartbeatActor>()
	{
		return AAtlantaHeartbeatActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtlantaHeartbeatActor(Z_Construct_UClass_AAtlantaHeartbeatActor, &AAtlantaHeartbeatActor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AAtlantaHeartbeatActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtlantaHeartbeatActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
