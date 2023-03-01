// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharmAttacher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharmAttacher() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharmAttacher_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharmAttacher();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharmAttacherAnimationTweak();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharm_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CharmAttacherOnAttachedOnActor__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACharmAttacher::execBindOnCharmAnimationTagsChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindOnCharmAnimationTagsChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharmAttacher::execDispatchOnCharmAnimationTagsChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispatchOnCharmAnimationTagsChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharmAttacher::execGetActorAttachedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorAttachedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharmAttacher::execGetAnimationTweak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCharmAttacherAnimationTweak*)Z_Param__Result=P_THIS->GetAnimationTweak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharmAttacher::execGetAttachedCharm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharm**)Z_Param__Result=P_THIS->GetAttachedCharm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharmAttacher::execGetSkeletalMeshComponentAttachedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetSkeletalMeshComponentAttachedOn();
		P_NATIVE_END;
	}
	void ACharmAttacher::StaticRegisterNativesACharmAttacher()
	{
		UClass* Class = ACharmAttacher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindOnCharmAnimationTagsChanged", &ACharmAttacher::execBindOnCharmAnimationTagsChanged },
			{ "DispatchOnCharmAnimationTagsChanged", &ACharmAttacher::execDispatchOnCharmAnimationTagsChanged },
			{ "GetActorAttachedOn", &ACharmAttacher::execGetActorAttachedOn },
			{ "GetAnimationTweak", &ACharmAttacher::execGetAnimationTweak },
			{ "GetAttachedCharm", &ACharmAttacher::execGetAttachedCharm },
			{ "GetSkeletalMeshComponentAttachedOn", &ACharmAttacher::execGetSkeletalMeshComponentAttachedOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharmAttacher, nullptr, "BindOnCharmAnimationTagsChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharmAttacher, nullptr, "DispatchOnCharmAnimationTagsChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics
	{
		struct CharmAttacher_eventGetActorAttachedOn_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharmAttacher_eventGetActorAttachedOn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharmAttacher, nullptr, "GetActorAttachedOn", nullptr, nullptr, sizeof(CharmAttacher_eventGetActorAttachedOn_Parms), Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics
	{
		struct CharmAttacher_eventGetAnimationTweak_Parms
		{
			FCharmAttacherAnimationTweak ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharmAttacher_eventGetAnimationTweak_Parms, ReturnValue), Z_Construct_UScriptStruct_FCharmAttacherAnimationTweak, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharmAttacher, nullptr, "GetAnimationTweak", nullptr, nullptr, sizeof(CharmAttacher_eventGetAnimationTweak_Parms), Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics
	{
		struct CharmAttacher_eventGetAttachedCharm_Parms
		{
			ACharm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharmAttacher_eventGetAttachedCharm_Parms, ReturnValue), Z_Construct_UClass_ACharm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharmAttacher, nullptr, "GetAttachedCharm", nullptr, nullptr, sizeof(CharmAttacher_eventGetAttachedCharm_Parms), Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics
	{
		struct CharmAttacher_eventGetSkeletalMeshComponentAttachedOn_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharmAttacher_eventGetSkeletalMeshComponentAttachedOn_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharmAttacher, nullptr, "GetSkeletalMeshComponentAttachedOn", nullptr, nullptr, sizeof(CharmAttacher_eventGetSkeletalMeshComponentAttachedOn_Parms), Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharmAttacher_NoRegister()
	{
		return ACharmAttacher::StaticClass();
	}
	struct Z_Construct_UClass_ACharmAttacher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachedCharm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attachedCharm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharmAnimationTagsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharmAnimationTagsChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttachedOnActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttachedOnActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharmAttacher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharmAttacher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharmAttacher_BindOnCharmAnimationTagsChanged, "BindOnCharmAnimationTagsChanged" }, // 2501170108
		{ &Z_Construct_UFunction_ACharmAttacher_DispatchOnCharmAnimationTagsChanged, "DispatchOnCharmAnimationTagsChanged" }, // 420899192
		{ &Z_Construct_UFunction_ACharmAttacher_GetActorAttachedOn, "GetActorAttachedOn" }, // 3366756467
		{ &Z_Construct_UFunction_ACharmAttacher_GetAnimationTweak, "GetAnimationTweak" }, // 393173227
		{ &Z_Construct_UFunction_ACharmAttacher_GetAttachedCharm, "GetAttachedCharm" }, // 4216053842
		{ &Z_Construct_UFunction_ACharmAttacher_GetSkeletalMeshComponentAttachedOn, "GetSkeletalMeshComponentAttachedOn" }, // 2421755289
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharmAttacher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharmAttacher.h" },
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharmAttacher_Statics::NewProp__attachedCharm_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharmAttacher_Statics::NewProp__attachedCharm = { "_attachedCharm", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharmAttacher, _attachedCharm), Z_Construct_UClass_ACharm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharmAttacher_Statics::NewProp__attachedCharm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharmAttacher_Statics::NewProp__attachedCharm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharmAttacher_Statics::NewProp__chain_MetaData[] = {
		{ "Category", "CharmAttacher" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharmAttacher_Statics::NewProp__chain = { "_chain", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharmAttacher, _chain), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharmAttacher_Statics::NewProp__chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharmAttacher_Statics::NewProp__chain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnCharmAnimationTagsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnCharmAnimationTagsChanged = { "OnCharmAnimationTagsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharmAttacher, OnCharmAnimationTagsChanged), Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnCharmAnimationTagsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnCharmAnimationTagsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnCharmAnimationTagsChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnAttachedOnActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharmAttacher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnAttachedOnActor = { "OnAttachedOnActor", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharmAttacher, OnAttachedOnActor), Z_Construct_UDelegateFunction_DeadByDaylight_CharmAttacherOnAttachedOnActor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnAttachedOnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnAttachedOnActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharmAttacher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharmAttacher_Statics::NewProp__attachedCharm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharmAttacher_Statics::NewProp__chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnCharmAnimationTagsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharmAttacher_Statics::NewProp_OnAttachedOnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharmAttacher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharmAttacher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharmAttacher_Statics::ClassParams = {
		&ACharmAttacher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharmAttacher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharmAttacher_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharmAttacher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharmAttacher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharmAttacher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharmAttacher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharmAttacher, 2914137762);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ACharmAttacher>()
	{
		return ACharmAttacher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharmAttacher(Z_Construct_UClass_ACharmAttacher, &ACharmAttacher::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ACharmAttacher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharmAttacher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
