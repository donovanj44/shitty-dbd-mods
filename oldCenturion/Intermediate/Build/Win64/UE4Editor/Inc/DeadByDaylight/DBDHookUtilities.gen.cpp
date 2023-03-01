// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDHookUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDHookUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHookUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHookUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMeatHook_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UDBDHookUtilities::execComputeHookStrugglePercent)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_hookedCamper);
		P_GET_PROPERTY(FFloatProperty,Z_Param_hookStruggleThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDHookUtilities::ComputeHookStrugglePercent(Z_Param_hookedCamper,Z_Param_hookStruggleThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsFreddyHook)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsFreddyHook(Z_Param_targetHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsHagHook)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsHagHook(Z_Param_targetHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsHookOf)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_GET_STRUCT(FGameplayTag,Z_Param_hookTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsHookOf(Z_Param_targetHook,Z_Param_hookTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsHuntressHook)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsHuntressHook(Z_Param_targetHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsLegionHook)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsLegionHook(Z_Param_targetHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsNurseHook)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsNurseHook(Z_Param_targetHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsPigHook)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsPigHook(Z_Param_targetHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDHookUtilities::execIsWraithHook)
	{
		P_GET_OBJECT(AMeatHook,Z_Param_targetHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDHookUtilities::IsWraithHook(Z_Param_targetHook);
		P_NATIVE_END;
	}
	void UDBDHookUtilities::StaticRegisterNativesUDBDHookUtilities()
	{
		UClass* Class = UDBDHookUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeHookStrugglePercent", &UDBDHookUtilities::execComputeHookStrugglePercent },
			{ "IsFreddyHook", &UDBDHookUtilities::execIsFreddyHook },
			{ "IsHagHook", &UDBDHookUtilities::execIsHagHook },
			{ "IsHookOf", &UDBDHookUtilities::execIsHookOf },
			{ "IsHuntressHook", &UDBDHookUtilities::execIsHuntressHook },
			{ "IsLegionHook", &UDBDHookUtilities::execIsLegionHook },
			{ "IsNurseHook", &UDBDHookUtilities::execIsNurseHook },
			{ "IsPigHook", &UDBDHookUtilities::execIsPigHook },
			{ "IsWraithHook", &UDBDHookUtilities::execIsWraithHook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics
	{
		struct DBDHookUtilities_eventComputeHookStrugglePercent_Parms
		{
			const ACamperPlayer* hookedCamper;
			float hookStruggleThreshold;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hookStruggleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hookedCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hookedCamper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventComputeHookStrugglePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_hookStruggleThreshold = { "hookStruggleThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventComputeHookStrugglePercent_Parms, hookStruggleThreshold), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_hookedCamper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_hookedCamper = { "hookedCamper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventComputeHookStrugglePercent_Parms, hookedCamper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_hookedCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_hookedCamper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_hookStruggleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::NewProp_hookedCamper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "ComputeHookStrugglePercent", nullptr, nullptr, sizeof(DBDHookUtilities_eventComputeHookStrugglePercent_Parms), Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics
	{
		struct DBDHookUtilities_eventIsFreddyHook_Parms
		{
			AMeatHook* targetHook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsFreddyHook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsFreddyHook_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsFreddyHook_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsFreddyHook", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsFreddyHook_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics
	{
		struct DBDHookUtilities_eventIsHagHook_Parms
		{
			AMeatHook* targetHook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsHagHook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsHagHook_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsHagHook_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsHagHook", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsHagHook_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsHagHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsHagHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics
	{
		struct DBDHookUtilities_eventIsHookOf_Parms
		{
			AMeatHook* targetHook;
			FGameplayTag hookTag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hookTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsHookOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsHookOf_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_hookTag = { "hookTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsHookOf_Parms, hookTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsHookOf_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_hookTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsHookOf", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsHookOf_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsHookOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsHookOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics
	{
		struct DBDHookUtilities_eventIsHuntressHook_Parms
		{
			AMeatHook* targetHook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsHuntressHook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsHuntressHook_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsHuntressHook_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsHuntressHook", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsHuntressHook_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics
	{
		struct DBDHookUtilities_eventIsLegionHook_Parms
		{
			AMeatHook* targetHook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsLegionHook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsLegionHook_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsLegionHook_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsLegionHook", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsLegionHook_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics
	{
		struct DBDHookUtilities_eventIsNurseHook_Parms
		{
			AMeatHook* targetHook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsNurseHook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsNurseHook_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsNurseHook_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsNurseHook", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsNurseHook_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics
	{
		struct DBDHookUtilities_eventIsPigHook_Parms
		{
			AMeatHook* targetHook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsPigHook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsPigHook_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsPigHook_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsPigHook", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsPigHook_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsPigHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsPigHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics
	{
		struct DBDHookUtilities_eventIsWraithHook_Parms
		{
			AMeatHook* targetHook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDHookUtilities_eventIsWraithHook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDHookUtilities_eventIsWraithHook_Parms), &Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::NewProp_targetHook = { "targetHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHookUtilities_eventIsWraithHook_Parms, targetHook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::NewProp_targetHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHookUtilities, nullptr, "IsWraithHook", nullptr, nullptr, sizeof(DBDHookUtilities_eventIsWraithHook_Parms), Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDHookUtilities_NoRegister()
	{
		return UDBDHookUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDHookUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDHookUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDHookUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDHookUtilities_ComputeHookStrugglePercent, "ComputeHookStrugglePercent" }, // 1060211783
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsFreddyHook, "IsFreddyHook" }, // 363813227
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsHagHook, "IsHagHook" }, // 1738723106
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsHookOf, "IsHookOf" }, // 2092795464
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsHuntressHook, "IsHuntressHook" }, // 991130784
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsLegionHook, "IsLegionHook" }, // 720023554
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsNurseHook, "IsNurseHook" }, // 1960467808
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsPigHook, "IsPigHook" }, // 1858598068
		{ &Z_Construct_UFunction_UDBDHookUtilities_IsWraithHook, "IsWraithHook" }, // 454088116
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDHookUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDHookUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDHookUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDHookUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDHookUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDHookUtilities_Statics::ClassParams = {
		&UDBDHookUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDHookUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDHookUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDHookUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDHookUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDHookUtilities, 1174091784);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDHookUtilities>()
	{
		return UDBDHookUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDHookUtilities(Z_Construct_UClass_UDBDHookUtilities, &UDBDHookUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDHookUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDHookUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
