// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DyingLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDyingLight() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDyingLight_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDyingLight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDyingLight::execOnObsessionChanged)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_newObsession);
		P_GET_OBJECT(ACamperPlayer,Z_Param_previousObsession);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObsessionChanged(Z_Param_newObsession,Z_Param_previousObsession);
		P_NATIVE_END;
	}
	void UDyingLight::StaticRegisterNativesUDyingLight()
	{
		UClass* Class = UDyingLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnObsessionChanged", &UDyingLight::execOnObsessionChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics
	{
		struct DyingLight_eventOnObsessionChanged_Parms
		{
			ACamperPlayer* newObsession;
			ACamperPlayer* previousObsession;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_previousObsession;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newObsession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::NewProp_previousObsession = { "previousObsession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DyingLight_eventOnObsessionChanged_Parms, previousObsession), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::NewProp_newObsession = { "newObsession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DyingLight_eventOnObsessionChanged_Parms, newObsession), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::NewProp_previousObsession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::NewProp_newObsession,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DyingLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDyingLight, nullptr, "OnObsessionChanged", nullptr, nullptr, sizeof(DyingLight_eventOnObsessionChanged_Parms), Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDyingLight_OnObsessionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDyingLight_OnObsessionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDyingLight_NoRegister()
	{
		return UDyingLight::StaticClass();
	}
	struct Z_Construct_UClass_UDyingLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorDebuffs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorDebuffs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorDebuffs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonObsessionStatusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__nonObsessionStatusEffectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obsessionStatusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__obsessionStatusEffectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obsessionActionSpeedBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__obsessionActionSpeedBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actionSpeedPenaltyPerToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__actionSpeedPenaltyPerToken;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__actionSpeedPenaltyPerToken_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDyingLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDyingLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDyingLight_OnObsessionChanged, "OnObsessionChanged" }, // 2187081206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDyingLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DyingLight.h" },
		{ "ModuleRelativePath", "Public/DyingLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDyingLight_Statics::NewProp__survivorDebuffs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DyingLight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDyingLight_Statics::NewProp__survivorDebuffs = { "_survivorDebuffs", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDyingLight, _survivorDebuffs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDyingLight_Statics::NewProp__survivorDebuffs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDyingLight_Statics::NewProp__survivorDebuffs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDyingLight_Statics::NewProp__survivorDebuffs_Inner = { "_survivorDebuffs", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDyingLight_Statics::NewProp__nonObsessionStatusEffectID_MetaData[] = {
		{ "Category", "DyingLight" },
		{ "ModuleRelativePath", "Public/DyingLight.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDyingLight_Statics::NewProp__nonObsessionStatusEffectID = { "_nonObsessionStatusEffectID", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDyingLight, _nonObsessionStatusEffectID), METADATA_PARAMS(Z_Construct_UClass_UDyingLight_Statics::NewProp__nonObsessionStatusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDyingLight_Statics::NewProp__nonObsessionStatusEffectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionStatusEffectID_MetaData[] = {
		{ "Category", "DyingLight" },
		{ "ModuleRelativePath", "Public/DyingLight.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionStatusEffectID = { "_obsessionStatusEffectID", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDyingLight, _obsessionStatusEffectID), METADATA_PARAMS(Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionStatusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionStatusEffectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionActionSpeedBonus_MetaData[] = {
		{ "Category", "DyingLight" },
		{ "ModuleRelativePath", "Public/DyingLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionActionSpeedBonus = { "_obsessionActionSpeedBonus", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDyingLight, _obsessionActionSpeedBonus), METADATA_PARAMS(Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionActionSpeedBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionActionSpeedBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDyingLight_Statics::NewProp__actionSpeedPenaltyPerToken_MetaData[] = {
		{ "Category", "DyingLight" },
		{ "ModuleRelativePath", "Public/DyingLight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDyingLight_Statics::NewProp__actionSpeedPenaltyPerToken = { "_actionSpeedPenaltyPerToken", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDyingLight, _actionSpeedPenaltyPerToken), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDyingLight_Statics::NewProp__actionSpeedPenaltyPerToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDyingLight_Statics::NewProp__actionSpeedPenaltyPerToken_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDyingLight_Statics::NewProp__actionSpeedPenaltyPerToken_Inner = { "_actionSpeedPenaltyPerToken", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDyingLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDyingLight_Statics::NewProp__survivorDebuffs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDyingLight_Statics::NewProp__survivorDebuffs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDyingLight_Statics::NewProp__nonObsessionStatusEffectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionStatusEffectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDyingLight_Statics::NewProp__obsessionActionSpeedBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDyingLight_Statics::NewProp__actionSpeedPenaltyPerToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDyingLight_Statics::NewProp__actionSpeedPenaltyPerToken_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDyingLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDyingLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDyingLight_Statics::ClassParams = {
		&UDyingLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDyingLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDyingLight_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDyingLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDyingLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDyingLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDyingLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDyingLight, 2039352429);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDyingLight>()
	{
		return UDyingLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDyingLight(Z_Construct_UClass_UDyingLight, &UDyingLight::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDyingLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDyingLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
