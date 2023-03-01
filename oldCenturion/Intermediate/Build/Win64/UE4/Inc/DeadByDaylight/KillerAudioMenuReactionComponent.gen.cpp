// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerAudioMenuReactionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerAudioMenuReactionComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerAudioMenuReactionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerAudioMenuReactionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMenuPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerAudioMenuReactionComponent::execOnLobbyTimeChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLobbyTimeChanged();
		P_NATIVE_END;
	}
	static FName NAME_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX = FName(TEXT("LobbyKillerReactionSpecificSurvivorSFX"));
	void UKillerAudioMenuReactionComponent::LobbyKillerReactionSpecificSurvivorSFX(TArray<ADBDMenuPlayer*> const& menuPlayers)
	{
		KillerAudioMenuReactionComponent_eventLobbyKillerReactionSpecificSurvivorSFX_Parms Parms;
		Parms.menuPlayers=menuPlayers;
		ProcessEvent(FindFunctionChecked(NAME_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX),&Parms);
	}
	void UKillerAudioMenuReactionComponent::StaticRegisterNativesUKillerAudioMenuReactionComponent()
	{
		UClass* Class = UKillerAudioMenuReactionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLobbyTimeChanged", &UKillerAudioMenuReactionComponent::execOnLobbyTimeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_menuPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_menuPlayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::NewProp_menuPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::NewProp_menuPlayers = { "menuPlayers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioMenuReactionComponent_eventLobbyKillerReactionSpecificSurvivorSFX_Parms, menuPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::NewProp_menuPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::NewProp_menuPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::NewProp_menuPlayers_Inner = { "menuPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDMenuPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::NewProp_menuPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::NewProp_menuPlayers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAudioMenuReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerAudioMenuReactionComponent, nullptr, "LobbyKillerReactionSpecificSurvivorSFX", nullptr, nullptr, sizeof(KillerAudioMenuReactionComponent_eventLobbyKillerReactionSpecificSurvivorSFX_Parms), Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAudioMenuReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerAudioMenuReactionComponent, nullptr, "OnLobbyTimeChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerAudioMenuReactionComponent_NoRegister()
	{
		return UKillerAudioMenuReactionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerAudioMenuReactionComponent_LobbyKillerReactionSpecificSurvivorSFX, "LobbyKillerReactionSpecificSurvivorSFX" }, // 825896159
		{ &Z_Construct_UFunction_UKillerAudioMenuReactionComponent_OnLobbyTimeChanged, "OnLobbyTimeChanged" }, // 3281927833
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KillerAudioMenuReactionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KillerAudioMenuReactionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerAudioMenuReactionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::ClassParams = {
		&UKillerAudioMenuReactionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerAudioMenuReactionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerAudioMenuReactionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerAudioMenuReactionComponent, 3818325674);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerAudioMenuReactionComponent>()
	{
		return UKillerAudioMenuReactionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerAudioMenuReactionComponent(Z_Construct_UClass_UKillerAudioMenuReactionComponent, &UKillerAudioMenuReactionComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerAudioMenuReactionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerAudioMenuReactionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
