// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/PossessPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePossessPlayer() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UPossessPlayer_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UPossessPlayer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	static FName NAME_UPossessPlayer_Cosmetic_OnPossessCancelled = FName(TEXT("Cosmetic_OnPossessCancelled"));
	void UPossessPlayer::Cosmetic_OnPossessCancelled(ADBDPlayer* player)
	{
		PossessPlayer_eventCosmetic_OnPossessCancelled_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UPossessPlayer_Cosmetic_OnPossessCancelled),&Parms);
	}
	static FName NAME_UPossessPlayer_Cosmetic_OnPossessStart = FName(TEXT("Cosmetic_OnPossessStart"));
	void UPossessPlayer::Cosmetic_OnPossessStart(ADBDPlayer* player)
	{
		PossessPlayer_eventCosmetic_OnPossessStart_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UPossessPlayer_Cosmetic_OnPossessStart),&Parms);
	}
	void UPossessPlayer::StaticRegisterNativesUPossessPlayer()
	{
	}
	struct Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PossessPlayer_eventCosmetic_OnPossessCancelled_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessPlayer, nullptr, "Cosmetic_OnPossessCancelled", nullptr, nullptr, sizeof(PossessPlayer_eventCosmetic_OnPossessCancelled_Parms), Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PossessPlayer_eventCosmetic_OnPossessStart_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessPlayer, nullptr, "Cosmetic_OnPossessStart", nullptr, nullptr, sizeof(PossessPlayer_eventCosmetic_OnPossessStart_Parms), Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPossessPlayer_NoRegister()
	{
		return UPossessPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UPossessPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__possessThePlayerMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__possessThePlayerMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPossessPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPossessPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessCancelled, "Cosmetic_OnPossessCancelled" }, // 3813786378
		{ &Z_Construct_UFunction_UPossessPlayer_Cosmetic_OnPossessStart, "Cosmetic_OnPossessStart" }, // 3559988016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PossessPlayer.h" },
		{ "ModuleRelativePath", "Public/PossessPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessPlayer_Statics::NewProp__possessThePlayerMaxCharge_MetaData[] = {
		{ "Category", "PossessPlayer" },
		{ "ModuleRelativePath", "Public/PossessPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPossessPlayer_Statics::NewProp__possessThePlayerMaxCharge = { "_possessThePlayerMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPossessPlayer, _possessThePlayerMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPossessPlayer_Statics::NewProp__possessThePlayerMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessPlayer_Statics::NewProp__possessThePlayerMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPossessPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPossessPlayer_Statics::NewProp__possessThePlayerMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPossessPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPossessPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPossessPlayer_Statics::ClassParams = {
		&UPossessPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPossessPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPossessPlayer_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPossessPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPossessPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPossessPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPossessPlayer, 556093712);
	template<> THETWINS_API UClass* StaticClass<UPossessPlayer>()
	{
		return UPossessPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPossessPlayer(Z_Construct_UClass_UPossessPlayer, &UPossessPlayer::StaticClass, TEXT("/Script/TheTwins"), TEXT("UPossessPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPossessPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
