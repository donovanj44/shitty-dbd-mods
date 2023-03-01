// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Solidarity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolidarity() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USolidarity_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USolidarity();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USolidarity::execAuthority_OnHealthChargeApplied)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_individualChargeAmount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalChargeAmount);
		P_GET_OBJECT(AActor,Z_Param_chargeInstigator);
		P_GET_UBOOL(Z_Param_wasCoop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnHealthChargeApplied(Z_Param_individualChargeAmount,Z_Param_totalChargeAmount,Z_Param_chargeInstigator,Z_Param_wasCoop,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolidarity::execAuthority_OnSkillCheckResponse)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_UBOOL(Z_Param_triggerLoudNoise);
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_chargeChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSkillCheckResponse(Z_Param_success,Z_Param_bonus,Z_Param_player,Z_Param_triggerLoudNoise,Z_Param_hadInput,ESkillCheckCustomType(Z_Param_type),Z_Param_chargeChange);
		P_NATIVE_END;
	}
	void USolidarity::StaticRegisterNativesUSolidarity()
	{
		UClass* Class = USolidarity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnHealthChargeApplied", &USolidarity::execAuthority_OnHealthChargeApplied },
			{ "Authority_OnSkillCheckResponse", &USolidarity::execAuthority_OnSkillCheckResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics
	{
		struct Solidarity_eventAuthority_OnHealthChargeApplied_Parms
		{
			float individualChargeAmount;
			float totalChargeAmount;
			AActor* chargeInstigator;
			bool wasCoop;
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static void NewProp_wasCoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasCoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalChargeAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_individualChargeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solidarity_eventAuthority_OnHealthChargeApplied_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_wasCoop_SetBit(void* Obj)
	{
		((Solidarity_eventAuthority_OnHealthChargeApplied_Parms*)Obj)->wasCoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_wasCoop = { "wasCoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solidarity_eventAuthority_OnHealthChargeApplied_Parms), &Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_wasCoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_chargeInstigator = { "chargeInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solidarity_eventAuthority_OnHealthChargeApplied_Parms, chargeInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_totalChargeAmount = { "totalChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solidarity_eventAuthority_OnHealthChargeApplied_Parms, totalChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_individualChargeAmount = { "individualChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solidarity_eventAuthority_OnHealthChargeApplied_Parms, individualChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_wasCoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_chargeInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_totalChargeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::NewProp_individualChargeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solidarity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolidarity, nullptr, "Authority_OnHealthChargeApplied", nullptr, nullptr, sizeof(Solidarity_eventAuthority_OnHealthChargeApplied_Parms), Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics
	{
		struct Solidarity_eventAuthority_OnSkillCheckResponse_Parms
		{
			bool success;
			bool bonus;
			ADBDPlayer* player;
			bool triggerLoudNoise;
			bool hadInput;
			ESkillCheckCustomType type;
			float chargeChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargeChange;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static void NewProp_hadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hadInput;
		static void NewProp_triggerLoudNoise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_triggerLoudNoise;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_chargeChange = { "chargeChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solidarity_eventAuthority_OnSkillCheckResponse_Parms, chargeChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solidarity_eventAuthority_OnSkillCheckResponse_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((Solidarity_eventAuthority_OnSkillCheckResponse_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solidarity_eventAuthority_OnSkillCheckResponse_Parms), &Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_triggerLoudNoise_SetBit(void* Obj)
	{
		((Solidarity_eventAuthority_OnSkillCheckResponse_Parms*)Obj)->triggerLoudNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_triggerLoudNoise = { "triggerLoudNoise", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solidarity_eventAuthority_OnSkillCheckResponse_Parms), &Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_triggerLoudNoise_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Solidarity_eventAuthority_OnSkillCheckResponse_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((Solidarity_eventAuthority_OnSkillCheckResponse_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solidarity_eventAuthority_OnSkillCheckResponse_Parms), &Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_success_SetBit(void* Obj)
	{
		((Solidarity_eventAuthority_OnSkillCheckResponse_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Solidarity_eventAuthority_OnSkillCheckResponse_Parms), &Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_chargeChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_hadInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_triggerLoudNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Solidarity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolidarity, nullptr, "Authority_OnSkillCheckResponse", nullptr, nullptr, sizeof(Solidarity_eventAuthority_OnSkillCheckResponse_Parms), Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USolidarity_NoRegister()
	{
		return USolidarity::StaticClass();
	}
	struct Z_Construct_UClass_USolidarity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__healOtherInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__healOtherInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetHPSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetHPSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__healerHPSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__healerHPSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowMedkit_MetaData[];
#endif
		static void NewProp__allowMedkit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowMedkit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USolidarity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USolidarity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USolidarity_Authority_OnHealthChargeApplied, "Authority_OnHealthChargeApplied" }, // 1483015219
		{ &Z_Construct_UFunction_USolidarity_Authority_OnSkillCheckResponse, "Authority_OnSkillCheckResponse" }, // 1189202975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolidarity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Solidarity.h" },
		{ "ModuleRelativePath", "Public/Solidarity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolidarity_Statics::NewProp__healOtherInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Solidarity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USolidarity_Statics::NewProp__healOtherInteraction = { "_healOtherInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolidarity, _healOtherInteraction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USolidarity_Statics::NewProp__healOtherInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolidarity_Statics::NewProp__healOtherInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolidarity_Statics::NewProp__targetHPSlot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Solidarity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USolidarity_Statics::NewProp__targetHPSlot = { "_targetHPSlot", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolidarity, _targetHPSlot), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USolidarity_Statics::NewProp__targetHPSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolidarity_Statics::NewProp__targetHPSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolidarity_Statics::NewProp__healerHPSlot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Solidarity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USolidarity_Statics::NewProp__healerHPSlot = { "_healerHPSlot", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolidarity, _healerHPSlot), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USolidarity_Statics::NewProp__healerHPSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolidarity_Statics::NewProp__healerHPSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolidarity_Statics::NewProp__allowMedkit_MetaData[] = {
		{ "Category", "Solidarity" },
		{ "ModuleRelativePath", "Public/Solidarity.h" },
	};
#endif
	void Z_Construct_UClass_USolidarity_Statics::NewProp__allowMedkit_SetBit(void* Obj)
	{
		((USolidarity*)Obj)->_allowMedkit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USolidarity_Statics::NewProp__allowMedkit = { "_allowMedkit", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USolidarity), &Z_Construct_UClass_USolidarity_Statics::NewProp__allowMedkit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USolidarity_Statics::NewProp__allowMedkit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolidarity_Statics::NewProp__allowMedkit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USolidarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolidarity_Statics::NewProp__healOtherInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolidarity_Statics::NewProp__targetHPSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolidarity_Statics::NewProp__healerHPSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolidarity_Statics::NewProp__allowMedkit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USolidarity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USolidarity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USolidarity_Statics::ClassParams = {
		&USolidarity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USolidarity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USolidarity_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USolidarity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USolidarity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USolidarity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USolidarity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USolidarity, 2409297952);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USolidarity>()
	{
		return USolidarity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USolidarity(Z_Construct_UClass_USolidarity, &USolidarity::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USolidarity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USolidarity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
