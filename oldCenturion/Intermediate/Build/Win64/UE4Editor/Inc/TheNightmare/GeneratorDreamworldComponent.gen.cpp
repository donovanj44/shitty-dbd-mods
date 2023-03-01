// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/GeneratorDreamworldComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorDreamworldComponent() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UGeneratorDreamworldComponent_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UGeneratorDreamworldComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
// End Cross Module References
	DEFINE_FUNCTION(UGeneratorDreamworldComponent::execOnRepairSkillCheckFailed)
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
		P_THIS->OnRepairSkillCheckFailed(Z_Param_success,Z_Param_bonus,Z_Param_player,Z_Param_triggerLoudNoise,Z_Param_hadInput,ESkillCheckCustomType(Z_Param_type),Z_Param_chargeChange);
		P_NATIVE_END;
	}
	static FName NAME_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck = FName(TEXT("Cosmetic_OnPlayerFailSkillCheck"));
	void UGeneratorDreamworldComponent::Cosmetic_OnPlayerFailSkillCheck(ADBDPlayer* player)
	{
		GeneratorDreamworldComponent_eventCosmetic_OnPlayerFailSkillCheck_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck),&Parms);
	}
	void UGeneratorDreamworldComponent::StaticRegisterNativesUGeneratorDreamworldComponent()
	{
		UClass* Class = UGeneratorDreamworldComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRepairSkillCheckFailed", &UGeneratorDreamworldComponent::execOnRepairSkillCheckFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDreamworldComponent_eventCosmetic_OnPlayerFailSkillCheck_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDreamworldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorDreamworldComponent, nullptr, "Cosmetic_OnPlayerFailSkillCheck", nullptr, nullptr, sizeof(GeneratorDreamworldComponent_eventCosmetic_OnPlayerFailSkillCheck_Parms), Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics
	{
		struct GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_chargeChange = { "chargeChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms, chargeChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms), &Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_triggerLoudNoise_SetBit(void* Obj)
	{
		((GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms*)Obj)->triggerLoudNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_triggerLoudNoise = { "triggerLoudNoise", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms), &Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_triggerLoudNoise_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms), &Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_success_SetBit(void* Obj)
	{
		((GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms), &Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_chargeChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_hadInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_triggerLoudNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDreamworldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorDreamworldComponent, nullptr, "OnRepairSkillCheckFailed", nullptr, nullptr, sizeof(GeneratorDreamworldComponent_eventOnRepairSkillCheckFailed_Parms), Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeneratorDreamworldComponent_NoRegister()
	{
		return UGeneratorDreamworldComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorDreamworldComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beamSocketsForBloodEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__beamSocketsForBloodEffect;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__beamSocketsForBloodEffect_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck, "Cosmetic_OnPlayerFailSkillCheck" }, // 396973944
		{ &Z_Construct_UFunction_UGeneratorDreamworldComponent_OnRepairSkillCheckFailed, "OnRepairSkillCheckFailed" }, // 3998755481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GeneratorDreamworldComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GeneratorDreamworldComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::NewProp__beamSocketsForBloodEffect_MetaData[] = {
		{ "Category", "GeneratorDreamworldComponent" },
		{ "ModuleRelativePath", "Public/GeneratorDreamworldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::NewProp__beamSocketsForBloodEffect = { "_beamSocketsForBloodEffect", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorDreamworldComponent, _beamSocketsForBloodEffect), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::NewProp__beamSocketsForBloodEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::NewProp__beamSocketsForBloodEffect_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::NewProp__beamSocketsForBloodEffect_Inner = { "_beamSocketsForBloodEffect", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::NewProp__beamSocketsForBloodEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::NewProp__beamSocketsForBloodEffect_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorDreamworldComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::ClassParams = {
		&UGeneratorDreamworldComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorDreamworldComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorDreamworldComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorDreamworldComponent, 904235826);
	template<> THENIGHTMARE_API UClass* StaticClass<UGeneratorDreamworldComponent>()
	{
		return UGeneratorDreamworldComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorDreamworldComponent(Z_Construct_UClass_UGeneratorDreamworldComponent, &UGeneratorDreamworldComponent::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UGeneratorDreamworldComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorDreamworldComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
