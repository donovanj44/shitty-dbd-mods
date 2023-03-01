// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDoctor/Public/TheDoctorUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheDoctorUtilities() {}
// Cross Module References
	THEDOCTOR_API UClass* Z_Construct_UClass_UTheDoctorUtilities_NoRegister();
	THEDOCTOR_API UClass* Z_Construct_UClass_UTheDoctorUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TheDoctor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THEDOCTOR_API UClass* Z_Construct_UClass_USurvivorMadnessEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTheDoctorUtilities::execCanGainInsanity)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTheDoctorUtilities::CanGainInsanity(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheDoctorUtilities::execGetMadnessTier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTheDoctorUtilities::GetMadnessTier(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheDoctorUtilities::execGetSurvivorMadnessEffect)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USurvivorMadnessEffect**)Z_Param__Result=UTheDoctorUtilities::GetSurvivorMadnessEffect(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheDoctorUtilities::execIsTotallyInsane)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTheDoctorUtilities::IsTotallyInsane(Z_Param_player);
		P_NATIVE_END;
	}
	void UTheDoctorUtilities::StaticRegisterNativesUTheDoctorUtilities()
	{
		UClass* Class = UTheDoctorUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanGainInsanity", &UTheDoctorUtilities::execCanGainInsanity },
			{ "GetMadnessTier", &UTheDoctorUtilities::execGetMadnessTier },
			{ "GetSurvivorMadnessEffect", &UTheDoctorUtilities::execGetSurvivorMadnessEffect },
			{ "IsTotallyInsane", &UTheDoctorUtilities::execIsTotallyInsane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics
	{
		struct TheDoctorUtilities_eventCanGainInsanity_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheDoctorUtilities_eventCanGainInsanity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheDoctorUtilities_eventCanGainInsanity_Parms), &Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheDoctorUtilities_eventCanGainInsanity_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheDoctorUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheDoctorUtilities, nullptr, "CanGainInsanity", nullptr, nullptr, sizeof(TheDoctorUtilities_eventCanGainInsanity_Parms), Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics
	{
		struct TheDoctorUtilities_eventGetMadnessTier_Parms
		{
			const ADBDPlayer* player;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheDoctorUtilities_eventGetMadnessTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheDoctorUtilities_eventGetMadnessTier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheDoctorUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheDoctorUtilities, nullptr, "GetMadnessTier", nullptr, nullptr, sizeof(TheDoctorUtilities_eventGetMadnessTier_Parms), Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics
	{
		struct TheDoctorUtilities_eventGetSurvivorMadnessEffect_Parms
		{
			const ADBDPlayer* player;
			USurvivorMadnessEffect* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheDoctorUtilities_eventGetSurvivorMadnessEffect_Parms, ReturnValue), Z_Construct_UClass_USurvivorMadnessEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheDoctorUtilities_eventGetSurvivorMadnessEffect_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheDoctorUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheDoctorUtilities, nullptr, "GetSurvivorMadnessEffect", nullptr, nullptr, sizeof(TheDoctorUtilities_eventGetSurvivorMadnessEffect_Parms), Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics
	{
		struct TheDoctorUtilities_eventIsTotallyInsane_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheDoctorUtilities_eventIsTotallyInsane_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheDoctorUtilities_eventIsTotallyInsane_Parms), &Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheDoctorUtilities_eventIsTotallyInsane_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheDoctorUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheDoctorUtilities, nullptr, "IsTotallyInsane", nullptr, nullptr, sizeof(TheDoctorUtilities_eventIsTotallyInsane_Parms), Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheDoctorUtilities_NoRegister()
	{
		return UTheDoctorUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UTheDoctorUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheDoctorUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDoctor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheDoctorUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheDoctorUtilities_CanGainInsanity, "CanGainInsanity" }, // 1458631642
		{ &Z_Construct_UFunction_UTheDoctorUtilities_GetMadnessTier, "GetMadnessTier" }, // 4143006008
		{ &Z_Construct_UFunction_UTheDoctorUtilities_GetSurvivorMadnessEffect, "GetSurvivorMadnessEffect" }, // 2427743123
		{ &Z_Construct_UFunction_UTheDoctorUtilities_IsTotallyInsane, "IsTotallyInsane" }, // 3065715344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheDoctorUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TheDoctorUtilities.h" },
		{ "ModuleRelativePath", "Public/TheDoctorUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheDoctorUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheDoctorUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheDoctorUtilities_Statics::ClassParams = {
		&UTheDoctorUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTheDoctorUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheDoctorUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheDoctorUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheDoctorUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheDoctorUtilities, 4064148101);
	template<> THEDOCTOR_API UClass* StaticClass<UTheDoctorUtilities>()
	{
		return UTheDoctorUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheDoctorUtilities(Z_Construct_UClass_UTheDoctorUtilities, &UTheDoctorUtilities::StaticClass, TEXT("/Script/TheDoctor"), TEXT("UTheDoctorUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheDoctorUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
