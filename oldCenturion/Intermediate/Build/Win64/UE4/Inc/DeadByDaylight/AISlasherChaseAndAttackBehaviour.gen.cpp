// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AISlasherChaseAndAttackBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISlasherChaseAndAttackBehaviour() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_NoRegister();
// End Cross Module References
	void UAISlasherChaseAndAttackBehaviour::StaticRegisterNativesUAISlasherChaseAndAttackBehaviour()
	{
	}
	UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_NoRegister()
	{
		return UAISlasherChaseAndAttackBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slasherAIPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__slasherAIPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slasherPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__slasherPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__behaviourData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__behaviourData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISlasherChaseAndAttackBehaviour.h" },
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherAIPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherAIPlayerController = { "_slasherAIPlayerController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISlasherChaseAndAttackBehaviour, _slasherAIPlayerController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherAIPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherAIPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherPlayer = { "_slasherPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISlasherChaseAndAttackBehaviour, _slasherPlayer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__behaviourData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__behaviourData = { "_behaviourData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISlasherChaseAndAttackBehaviour, _behaviourData), Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__behaviourData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__behaviourData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherAIPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__slasherPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::NewProp__behaviourData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISlasherChaseAndAttackBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::ClassParams = {
		&UAISlasherChaseAndAttackBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISlasherChaseAndAttackBehaviour, 1292333352);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAISlasherChaseAndAttackBehaviour>()
	{
		return UAISlasherChaseAndAttackBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISlasherChaseAndAttackBehaviour(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviour, &UAISlasherChaseAndAttackBehaviour::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAISlasherChaseAndAttackBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISlasherChaseAndAttackBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
