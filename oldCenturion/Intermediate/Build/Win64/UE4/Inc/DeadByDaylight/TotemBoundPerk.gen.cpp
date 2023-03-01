// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TotemBoundPerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTotemBoundPerk() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTotemBoundPerk_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTotemBoundPerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETotemState();
// End Cross Module References
	DEFINE_FUNCTION(UTotemBoundPerk::execAuthority_BindToDullTotems)
	{
		P_GET_UBOOL(Z_Param_allowAdditionalBoundTotems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Authority_BindToDullTotems(Z_Param_allowAdditionalBoundTotems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTotemBoundPerk::execAuthority_UnbindFromTotem)
	{
		P_GET_OBJECT(ATotem,Z_Param_aTotemActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_UnbindFromTotem(Z_Param_aTotemActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTotemBoundPerk::execGetBoundTotems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ATotem*>*)Z_Param__Result=P_THIS->GetBoundTotems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTotemBoundPerk::execGetDistanceToOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceToOwner(Z_Param_otherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTotemBoundPerk::execGetTotems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ATotem*>*)Z_Param__Result=P_THIS->GetTotems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTotemBoundPerk::execOnRep_BoundTotems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BoundTotems();
		P_NATIVE_END;
	}
	void UTotemBoundPerk::StaticRegisterNativesUTotemBoundPerk()
	{
		UClass* Class = UTotemBoundPerk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_BindToDullTotems", &UTotemBoundPerk::execAuthority_BindToDullTotems },
			{ "Authority_UnbindFromTotem", &UTotemBoundPerk::execAuthority_UnbindFromTotem },
			{ "GetBoundTotems", &UTotemBoundPerk::execGetBoundTotems },
			{ "GetDistanceToOwner", &UTotemBoundPerk::execGetDistanceToOwner },
			{ "GetTotems", &UTotemBoundPerk::execGetTotems },
			{ "OnRep_BoundTotems", &UTotemBoundPerk::execOnRep_BoundTotems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics
	{
		struct TotemBoundPerk_eventAuthority_BindToDullTotems_Parms
		{
			bool allowAdditionalBoundTotems;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_allowAdditionalBoundTotems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowAdditionalBoundTotems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TotemBoundPerk_eventAuthority_BindToDullTotems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TotemBoundPerk_eventAuthority_BindToDullTotems_Parms), &Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_allowAdditionalBoundTotems_SetBit(void* Obj)
	{
		((TotemBoundPerk_eventAuthority_BindToDullTotems_Parms*)Obj)->allowAdditionalBoundTotems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_allowAdditionalBoundTotems = { "allowAdditionalBoundTotems", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TotemBoundPerk_eventAuthority_BindToDullTotems_Parms), &Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_allowAdditionalBoundTotems_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::NewProp_allowAdditionalBoundTotems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTotemBoundPerk, nullptr, "Authority_BindToDullTotems", nullptr, nullptr, sizeof(TotemBoundPerk_eventAuthority_BindToDullTotems_Parms), Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics
	{
		struct TotemBoundPerk_eventAuthority_UnbindFromTotem_Parms
		{
			ATotem* aTotemActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aTotemActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::NewProp_aTotemActor = { "aTotemActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TotemBoundPerk_eventAuthority_UnbindFromTotem_Parms, aTotemActor), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::NewProp_aTotemActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTotemBoundPerk, nullptr, "Authority_UnbindFromTotem", nullptr, nullptr, sizeof(TotemBoundPerk_eventAuthority_UnbindFromTotem_Parms), Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics
	{
		struct TotemBoundPerk_eventGetBoundTotems_Parms
		{
			TArray<ATotem*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TotemBoundPerk_eventGetBoundTotems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTotemBoundPerk, nullptr, "GetBoundTotems", nullptr, nullptr, sizeof(TotemBoundPerk_eventGetBoundTotems_Parms), Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics
	{
		struct TotemBoundPerk_eventGetDistanceToOwner_Parms
		{
			const AActor* otherActor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TotemBoundPerk_eventGetDistanceToOwner_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::NewProp_otherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TotemBoundPerk_eventGetDistanceToOwner_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::NewProp_otherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::NewProp_otherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTotemBoundPerk, nullptr, "GetDistanceToOwner", nullptr, nullptr, sizeof(TotemBoundPerk_eventGetDistanceToOwner_Parms), Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics
	{
		struct TotemBoundPerk_eventGetTotems_Parms
		{
			TArray<ATotem*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TotemBoundPerk_eventGetTotems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTotemBoundPerk, nullptr, "GetTotems", nullptr, nullptr, sizeof(TotemBoundPerk_eventGetTotems_Parms), Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTotemBoundPerk_GetTotems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTotemBoundPerk_GetTotems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTotemBoundPerk, nullptr, "OnRep_BoundTotems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTotemBoundPerk_NoRegister()
	{
		return UTotemBoundPerk::StaticClass();
	}
	struct Z_Construct_UClass_UTotemBoundPerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numTotemsToBind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numTotemsToBind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__authorityPrevTotemActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__authorityPrevTotemActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__authorityPrevTotemActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__local_boundTotems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__local_boundTotems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__local_boundTotems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boundTotems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__boundTotems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__boundTotems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__doNotBindToTotemOnInit_MetaData[];
#endif
		static void NewProp__doNotBindToTotemOnInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__doNotBindToTotemOnInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotemBoundState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TotemBoundState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TotemBoundState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTotemBoundPerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTotemBoundPerk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTotemBoundPerk_Authority_BindToDullTotems, "Authority_BindToDullTotems" }, // 3151570006
		{ &Z_Construct_UFunction_UTotemBoundPerk_Authority_UnbindFromTotem, "Authority_UnbindFromTotem" }, // 3907044267
		{ &Z_Construct_UFunction_UTotemBoundPerk_GetBoundTotems, "GetBoundTotems" }, // 4154176981
		{ &Z_Construct_UFunction_UTotemBoundPerk_GetDistanceToOwner, "GetDistanceToOwner" }, // 1618575602
		{ &Z_Construct_UFunction_UTotemBoundPerk_GetTotems, "GetTotems" }, // 2070798255
		{ &Z_Construct_UFunction_UTotemBoundPerk_OnRep_BoundTotems, "OnRep_BoundTotems" }, // 853355029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemBoundPerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TotemBoundPerk.h" },
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__numTotemsToBind_MetaData[] = {
		{ "Category", "TotemBoundPerk" },
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__numTotemsToBind = { "_numTotemsToBind", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemBoundPerk, _numTotemsToBind), METADATA_PARAMS(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__numTotemsToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__numTotemsToBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__authorityPrevTotemActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__authorityPrevTotemActors = { "_authorityPrevTotemActors", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemBoundPerk, _authorityPrevTotemActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__authorityPrevTotemActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__authorityPrevTotemActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__authorityPrevTotemActors_Inner = { "_authorityPrevTotemActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__local_boundTotems_MetaData[] = {
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__local_boundTotems = { "_local_boundTotems", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemBoundPerk, _local_boundTotems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__local_boundTotems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__local_boundTotems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__local_boundTotems_Inner = { "_local_boundTotems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__boundTotems_MetaData[] = {
		{ "Category", "TotemBoundPerk" },
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__boundTotems = { "_boundTotems", "OnRep_BoundTotems", (EPropertyFlags)0x0020080100002034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemBoundPerk, _boundTotems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__boundTotems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__boundTotems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__boundTotems_Inner = { "_boundTotems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__doNotBindToTotemOnInit_MetaData[] = {
		{ "Category", "TotemBoundPerk" },
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	void Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__doNotBindToTotemOnInit_SetBit(void* Obj)
	{
		((UTotemBoundPerk*)Obj)->_doNotBindToTotemOnInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__doNotBindToTotemOnInit = { "_doNotBindToTotemOnInit", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTotemBoundPerk), &Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__doNotBindToTotemOnInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__doNotBindToTotemOnInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__doNotBindToTotemOnInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp_TotemBoundState_MetaData[] = {
		{ "Category", "TotemBoundPerk" },
		{ "ModuleRelativePath", "Public/TotemBoundPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp_TotemBoundState = { "TotemBoundState", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTotemBoundPerk, TotemBoundState), Z_Construct_UEnum_DeadByDaylight_ETotemState, METADATA_PARAMS(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp_TotemBoundState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp_TotemBoundState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp_TotemBoundState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTotemBoundPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__numTotemsToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__authorityPrevTotemActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__authorityPrevTotemActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__local_boundTotems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__local_boundTotems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__boundTotems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__boundTotems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp__doNotBindToTotemOnInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp_TotemBoundState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTotemBoundPerk_Statics::NewProp_TotemBoundState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTotemBoundPerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTotemBoundPerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTotemBoundPerk_Statics::ClassParams = {
		&UTotemBoundPerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTotemBoundPerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTotemBoundPerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTotemBoundPerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTotemBoundPerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTotemBoundPerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTotemBoundPerk, 1434030690);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTotemBoundPerk>()
	{
		return UTotemBoundPerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTotemBoundPerk(Z_Construct_UClass_UTotemBoundPerk, &UTotemBoundPerk::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTotemBoundPerk"), false, nullptr, nullptr, nullptr);

	void UTotemBoundPerk::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__boundTotems(TEXT("_boundTotems"));

		const bool bIsValid = true
			&& Name__boundTotems == ClassReps[(int32)ENetFields_Private::_boundTotems].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTotemBoundPerk"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTotemBoundPerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
