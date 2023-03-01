// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EffectsLocator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectsLocator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEffectsLocator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEffectsLocator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEffectsLocatorTargets();
// End Cross Module References
	DEFINE_FUNCTION(AEffectsLocator::execOnEnterCollisionArea)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterCollisionArea(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEffectsLocator::execOnLeaveCollisionArea)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaveCollisionArea(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	static FName NAME_AEffectsLocator_OnActorTick = FName(TEXT("OnActorTick"));
	void AEffectsLocator::OnActorTick(UMaterialInstanceDynamic* actorMaterialInstanceDynamic)
	{
		EffectsLocator_eventOnActorTick_Parms Parms;
		Parms.actorMaterialInstanceDynamic=actorMaterialInstanceDynamic;
		ProcessEvent(FindFunctionChecked(NAME_AEffectsLocator_OnActorTick),&Parms);
	}
	static FName NAME_AEffectsLocator_OnFoundActor = FName(TEXT("OnFoundActor"));
	void AEffectsLocator::OnFoundActor(AActor* foundActor)
	{
		EffectsLocator_eventOnFoundActor_Parms Parms;
		Parms.foundActor=foundActor;
		ProcessEvent(FindFunctionChecked(NAME_AEffectsLocator_OnFoundActor),&Parms);
	}
	static FName NAME_AEffectsLocator_OnLostActor = FName(TEXT("OnLostActor"));
	void AEffectsLocator::OnLostActor(AActor* lostActor)
	{
		EffectsLocator_eventOnLostActor_Parms Parms;
		Parms.lostActor=lostActor;
		ProcessEvent(FindFunctionChecked(NAME_AEffectsLocator_OnLostActor),&Parms);
	}
	void AEffectsLocator::StaticRegisterNativesAEffectsLocator()
	{
		UClass* Class = AEffectsLocator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnterCollisionArea", &AEffectsLocator::execOnEnterCollisionArea },
			{ "OnLeaveCollisionArea", &AEffectsLocator::execOnLeaveCollisionArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorMaterialInstanceDynamic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::NewProp_actorMaterialInstanceDynamic = { "actorMaterialInstanceDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectsLocator_eventOnActorTick_Parms, actorMaterialInstanceDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::NewProp_actorMaterialInstanceDynamic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectsLocator, nullptr, "OnActorTick", nullptr, nullptr, sizeof(EffectsLocator_eventOnActorTick_Parms), Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEffectsLocator_OnActorTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEffectsLocator_OnActorTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics
	{
		struct EffectsLocator_eventOnEnterCollisionArea_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectsLocator_eventOnEnterCollisionArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectsLocator_eventOnEnterCollisionArea_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectsLocator, nullptr, "OnEnterCollisionArea", nullptr, nullptr, sizeof(EffectsLocator_eventOnEnterCollisionArea_Parms), Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foundActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::NewProp_foundActor = { "foundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectsLocator_eventOnFoundActor_Parms, foundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::NewProp_foundActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectsLocator, nullptr, "OnFoundActor", nullptr, nullptr, sizeof(EffectsLocator_eventOnFoundActor_Parms), Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEffectsLocator_OnFoundActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEffectsLocator_OnFoundActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics
	{
		struct EffectsLocator_eventOnLeaveCollisionArea_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectsLocator_eventOnLeaveCollisionArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectsLocator_eventOnLeaveCollisionArea_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectsLocator, nullptr, "OnLeaveCollisionArea", nullptr, nullptr, sizeof(EffectsLocator_eventOnLeaveCollisionArea_Parms), Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lostActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::NewProp_lostActor = { "lostActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectsLocator_eventOnLostActor_Parms, lostActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::NewProp_lostActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectsLocator, nullptr, "OnLostActor", nullptr, nullptr, sizeof(EffectsLocator_eventOnLostActor_Parms), Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEffectsLocator_OnLostActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEffectsLocator_OnLostActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEffectsLocator_NoRegister()
	{
		return AEffectsLocator::StaticClass();
	}
	struct Z_Construct_UClass_AEffectsLocator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorCaptureRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActorCaptureRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectedActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffectedActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEffectsLocator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEffectsLocator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEffectsLocator_OnActorTick, "OnActorTick" }, // 860751025
		{ &Z_Construct_UFunction_AEffectsLocator_OnEnterCollisionArea, "OnEnterCollisionArea" }, // 2040423225
		{ &Z_Construct_UFunction_AEffectsLocator_OnFoundActor, "OnFoundActor" }, // 4101736741
		{ &Z_Construct_UFunction_AEffectsLocator_OnLeaveCollisionArea, "OnLeaveCollisionArea" }, // 1719935786
		{ &Z_Construct_UFunction_AEffectsLocator_OnLostActor, "OnLostActor" }, // 1337432380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectsLocator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffectsLocator.h" },
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectsLocator_Statics::NewProp_ActorCaptureRadius_MetaData[] = {
		{ "Category", "EffectsLocator" },
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEffectsLocator_Statics::NewProp_ActorCaptureRadius = { "ActorCaptureRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEffectsLocator, ActorCaptureRadius), METADATA_PARAMS(Z_Construct_UClass_AEffectsLocator_Statics::NewProp_ActorCaptureRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectsLocator_Statics::NewProp_ActorCaptureRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectsLocator_Statics::NewProp_AffectedActors_MetaData[] = {
		{ "Category", "EffectsLocator" },
		{ "ModuleRelativePath", "Public/EffectsLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEffectsLocator_Statics::NewProp_AffectedActors = { "AffectedActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEffectsLocator, AffectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEffectsLocator_Statics::NewProp_AffectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectsLocator_Statics::NewProp_AffectedActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEffectsLocator_Statics::NewProp_AffectedActors_Inner = { "AffectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffectsLocatorTargets, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffectsLocator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectsLocator_Statics::NewProp_ActorCaptureRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectsLocator_Statics::NewProp_AffectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectsLocator_Statics::NewProp_AffectedActors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEffectsLocator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectsLocator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEffectsLocator_Statics::ClassParams = {
		&AEffectsLocator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEffectsLocator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEffectsLocator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEffectsLocator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectsLocator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEffectsLocator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEffectsLocator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEffectsLocator, 232298219);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AEffectsLocator>()
	{
		return AEffectsLocator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEffectsLocator(Z_Construct_UClass_AEffectsLocator, &AEffectsLocator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AEffectsLocator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectsLocator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
