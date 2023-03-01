// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrike_IsPlayerPressingInputCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrike_IsPlayerPressingInputCondition() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_Condition();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
// End Cross Module References
	void UK25ChainStrike_IsPlayerPressingInputCondition::StaticRegisterNativesUK25ChainStrike_IsPlayerPressingInputCondition()
	{
	}
	UClass* Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_NoRegister()
	{
		return UK25ChainStrike_IsPlayerPressingInputCondition::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__inputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__inputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFSM_Condition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainStrike_IsPlayerPressingInputCondition.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrike_IsPlayerPressingInputCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::NewProp__inputType_MetaData[] = {
		{ "Category", "K25ChainStrike_IsPlayerPressingInputCondition" },
		{ "ModuleRelativePath", "Public/K25ChainStrike_IsPlayerPressingInputCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::NewProp__inputType = { "_inputType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrike_IsPlayerPressingInputCondition, _inputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::NewProp__inputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::NewProp__inputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::NewProp__inputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::NewProp__inputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::NewProp__inputType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrike_IsPlayerPressingInputCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::ClassParams = {
		&UK25ChainStrike_IsPlayerPressingInputCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrike_IsPlayerPressingInputCondition, 2112311817);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrike_IsPlayerPressingInputCondition>()
	{
		return UK25ChainStrike_IsPlayerPressingInputCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrike_IsPlayerPressingInputCondition(Z_Construct_UClass_UK25ChainStrike_IsPlayerPressingInputCondition, &UK25ChainStrike_IsPlayerPressingInputCondition::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrike_IsPlayerPressingInputCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrike_IsPlayerPressingInputCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
