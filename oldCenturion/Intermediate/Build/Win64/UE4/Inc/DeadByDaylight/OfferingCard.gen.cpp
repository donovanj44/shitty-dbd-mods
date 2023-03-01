// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingCard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingCard() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AOfferingCard_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AOfferingCard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingAnimState();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingTypeTexture();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRarityTexture();
// End Cross Module References
	static FName NAME_AOfferingCard_PlayAnim = FName(TEXT("PlayAnim"));
	void AOfferingCard::PlayAnim(EOfferingAnimState state)
	{
		OfferingCard_eventPlayAnim_Parms Parms;
		Parms.state=state;
		ProcessEvent(FindFunctionChecked(NAME_AOfferingCard_PlayAnim),&Parms);
	}
	void AOfferingCard::StaticRegisterNativesAOfferingCard()
	{
	}
	struct Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingCard_eventPlayAnim_Parms, state), Z_Construct_UEnum_DeadByDaylight_EOfferingAnimState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingCard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOfferingCard, nullptr, "PlayAnim", nullptr, nullptr, sizeof(OfferingCard_eventPlayAnim_Parms), Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOfferingCard_PlayAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOfferingCard_PlayAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOfferingCard_NoRegister()
	{
		return AOfferingCard::StaticClass();
	}
	struct Z_Construct_UClass_AOfferingCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingTypeTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OfferingTypeTextures;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfferingTypeTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RarityTextures;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RarityTextures_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOfferingCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOfferingCard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOfferingCard_PlayAnim, "PlayAnim" }, // 3625764394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingCard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OfferingCard.h" },
		{ "ModuleRelativePath", "Public/OfferingCard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingCard_Statics::NewProp_OfferingTypeTextures_MetaData[] = {
		{ "Category", "OfferingCard" },
		{ "ModuleRelativePath", "Public/OfferingCard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfferingCard_Statics::NewProp_OfferingTypeTextures = { "OfferingTypeTextures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingCard, OfferingTypeTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfferingCard_Statics::NewProp_OfferingTypeTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingCard_Statics::NewProp_OfferingTypeTextures_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOfferingCard_Statics::NewProp_OfferingTypeTextures_Inner = { "OfferingTypeTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOfferingTypeTexture, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOfferingCard_Statics::NewProp_RarityTextures_MetaData[] = {
		{ "Category", "OfferingCard" },
		{ "ModuleRelativePath", "Public/OfferingCard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOfferingCard_Statics::NewProp_RarityTextures = { "RarityTextures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOfferingCard, RarityTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOfferingCard_Statics::NewProp_RarityTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingCard_Statics::NewProp_RarityTextures_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOfferingCard_Statics::NewProp_RarityTextures_Inner = { "RarityTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRarityTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOfferingCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingCard_Statics::NewProp_OfferingTypeTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingCard_Statics::NewProp_OfferingTypeTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingCard_Statics::NewProp_RarityTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOfferingCard_Statics::NewProp_RarityTextures_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOfferingCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOfferingCard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOfferingCard_Statics::ClassParams = {
		&AOfferingCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOfferingCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOfferingCard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOfferingCard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOfferingCard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOfferingCard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOfferingCard, 3057684990);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AOfferingCard>()
	{
		return AOfferingCard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOfferingCard(Z_Construct_UClass_AOfferingCard, &AOfferingCard::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AOfferingCard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOfferingCard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
