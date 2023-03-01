// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerBlindingFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerBlindingFXComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerBlindingFXComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerBlindingFXComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindingFXComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerBlindingFXComponent::execMulticast_OnBlindedByPlayersCosmetic)
	{
		P_GET_TARRAY(ADBDPlayer*,Z_Param_players);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnBlindedByPlayersCosmetic_Implementation(Z_Param_players);
		P_NATIVE_END;
	}
	static FName NAME_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic = FName(TEXT("Multicast_OnBlindedByPlayersCosmetic"));
	void UKillerBlindingFXComponent::Multicast_OnBlindedByPlayersCosmetic(TArray<ADBDPlayer*> const& players)
	{
		KillerBlindingFXComponent_eventMulticast_OnBlindedByPlayersCosmetic_Parms Parms;
		Parms.players=players;
		ProcessEvent(FindFunctionChecked(NAME_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic),&Parms);
	}
	void UKillerBlindingFXComponent::StaticRegisterNativesUKillerBlindingFXComponent()
	{
		UClass* Class = UKillerBlindingFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnBlindedByPlayersCosmetic", &UKillerBlindingFXComponent::execMulticast_OnBlindedByPlayersCosmetic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_players_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::NewProp_players_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerBlindingFXComponent_eventMulticast_OnBlindedByPlayersCosmetic_Parms, players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::NewProp_players_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::NewProp_players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::NewProp_players_Inner = { "players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::NewProp_players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::NewProp_players_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerBlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerBlindingFXComponent, nullptr, "Multicast_OnBlindedByPlayersCosmetic", nullptr, nullptr, sizeof(KillerBlindingFXComponent_eventMulticast_OnBlindedByPlayersCosmetic_Parms), Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerBlindingFXComponent_NoRegister()
	{
		return UKillerBlindingFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerBlindingFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blindedSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerBlindingFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlindingFXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerBlindingFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerBlindingFXComponent_Multicast_OnBlindedByPlayersCosmetic, "Multicast_OnBlindedByPlayersCosmetic" }, // 4077540546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerBlindingFXComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerBlindingFXComponent.h" },
		{ "ModuleRelativePath", "Public/KillerBlindingFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerBlindingFXComponent_Statics::NewProp__blindedSound_MetaData[] = {
		{ "Category", "KillerBlindingFXComponent" },
		{ "ModuleRelativePath", "Public/KillerBlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerBlindingFXComponent_Statics::NewProp__blindedSound = { "_blindedSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerBlindingFXComponent, _blindedSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKillerBlindingFXComponent_Statics::NewProp__blindedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerBlindingFXComponent_Statics::NewProp__blindedSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerBlindingFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerBlindingFXComponent_Statics::NewProp__blindedSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerBlindingFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerBlindingFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerBlindingFXComponent_Statics::ClassParams = {
		&UKillerBlindingFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillerBlindingFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerBlindingFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerBlindingFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerBlindingFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerBlindingFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerBlindingFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerBlindingFXComponent, 3551729748);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerBlindingFXComponent>()
	{
		return UKillerBlindingFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerBlindingFXComponent(Z_Construct_UClass_UKillerBlindingFXComponent, &UKillerBlindingFXComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerBlindingFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerBlindingFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
