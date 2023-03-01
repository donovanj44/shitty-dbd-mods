// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LightFollower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightFollower() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightFollower_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightFollower();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULightFollower::execAddFollower)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_follower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFollower(Z_Param_follower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightFollower::execSetLeader)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_leader);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeader(Z_Param_leader,Z_Param_maxIntensity);
		P_NATIVE_END;
	}
	void ULightFollower::StaticRegisterNativesULightFollower()
	{
		UClass* Class = ULightFollower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFollower", &ULightFollower::execAddFollower },
			{ "SetLeader", &ULightFollower::execSetLeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightFollower_AddFollower_Statics
	{
		struct LightFollower_eventAddFollower_Parms
		{
			ULightComponent* follower;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_follower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_follower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightFollower_AddFollower_Statics::NewProp_follower_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightFollower_AddFollower_Statics::NewProp_follower = { "follower", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightFollower_eventAddFollower_Parms, follower), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightFollower_AddFollower_Statics::NewProp_follower_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightFollower_AddFollower_Statics::NewProp_follower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightFollower_AddFollower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightFollower_AddFollower_Statics::NewProp_follower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightFollower_AddFollower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightFollower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightFollower_AddFollower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightFollower, nullptr, "AddFollower", nullptr, nullptr, sizeof(LightFollower_eventAddFollower_Parms), Z_Construct_UFunction_ULightFollower_AddFollower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightFollower_AddFollower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightFollower_AddFollower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightFollower_AddFollower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightFollower_AddFollower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightFollower_AddFollower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightFollower_SetLeader_Statics
	{
		struct LightFollower_eventSetLeader_Parms
		{
			ULightComponent* leader;
			float maxIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightFollower_SetLeader_Statics::NewProp_maxIntensity = { "maxIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightFollower_eventSetLeader_Parms, maxIntensity), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightFollower_SetLeader_Statics::NewProp_leader_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightFollower_SetLeader_Statics::NewProp_leader = { "leader", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightFollower_eventSetLeader_Parms, leader), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightFollower_SetLeader_Statics::NewProp_leader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightFollower_SetLeader_Statics::NewProp_leader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightFollower_SetLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightFollower_SetLeader_Statics::NewProp_maxIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightFollower_SetLeader_Statics::NewProp_leader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightFollower_SetLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightFollower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightFollower_SetLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightFollower, nullptr, "SetLeader", nullptr, nullptr, sizeof(LightFollower_eventSetLeader_Parms), Z_Construct_UFunction_ULightFollower_SetLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightFollower_SetLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightFollower_SetLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightFollower_SetLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightFollower_SetLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightFollower_SetLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightFollower_NoRegister()
	{
		return ULightFollower::StaticClass();
	}
	struct Z_Construct_UClass_ULightFollower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightFollower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightFollower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightFollower_AddFollower, "AddFollower" }, // 2637940523
		{ &Z_Construct_UFunction_ULightFollower_SetLeader, "SetLeader" }, // 1016485070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightFollower_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LightFollower.h" },
		{ "ModuleRelativePath", "Public/LightFollower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightFollower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightFollower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightFollower_Statics::ClassParams = {
		&ULightFollower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightFollower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightFollower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightFollower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightFollower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightFollower, 3756705681);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULightFollower>()
	{
		return ULightFollower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightFollower(Z_Construct_UClass_ULightFollower, &ULightFollower::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULightFollower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightFollower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
