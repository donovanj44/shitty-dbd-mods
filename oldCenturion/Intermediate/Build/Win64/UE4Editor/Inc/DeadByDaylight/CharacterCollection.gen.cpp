// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCollection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterCollection_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterCollection();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterCollection::execGetAllDBDPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=P_THIS->GetAllDBDPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollection::execGetKiller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetKiller();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollection::execGetMainDBDPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<ADBDPlayer*>*)Z_Param__Result=P_THIS->GetMainDBDPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollection::execGetSurvivors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<ACamperPlayer*>*)Z_Param__Result=P_THIS->GetSurvivors();
		P_NATIVE_END;
	}
	void UCharacterCollection::StaticRegisterNativesUCharacterCollection()
	{
		UClass* Class = UCharacterCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllDBDPlayers", &UCharacterCollection::execGetAllDBDPlayers },
			{ "GetKiller", &UCharacterCollection::execGetKiller },
			{ "GetMainDBDPlayers", &UCharacterCollection::execGetMainDBDPlayers },
			{ "GetSurvivors", &UCharacterCollection::execGetSurvivors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics
	{
		struct CharacterCollection_eventGetAllDBDPlayers_Parms
		{
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollection_eventGetAllDBDPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollection, nullptr, "GetAllDBDPlayers", nullptr, nullptr, sizeof(CharacterCollection_eventGetAllDBDPlayers_Parms), Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics
	{
		struct CharacterCollection_eventGetKiller_Parms
		{
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollection_eventGetKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollection, nullptr, "GetKiller", nullptr, nullptr, sizeof(CharacterCollection_eventGetKiller_Parms), Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollection_GetKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollection_GetKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics
	{
		struct CharacterCollection_eventGetMainDBDPlayers_Parms
		{
			TSet<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollection_eventGetMainDBDPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::NewProp_ReturnValue_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollection, nullptr, "GetMainDBDPlayers", nullptr, nullptr, sizeof(CharacterCollection_eventGetMainDBDPlayers_Parms), Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics
	{
		struct CharacterCollection_eventGetSurvivors_Parms
		{
			TSet<ACamperPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollection_eventGetSurvivors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::NewProp_ReturnValue_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollection, nullptr, "GetSurvivors", nullptr, nullptr, sizeof(CharacterCollection_eventGetSurvivors_Parms), Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollection_GetSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollection_GetSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterCollection_NoRegister()
	{
		return UCharacterCollection::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__allCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__allCharacters_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonPlayableCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__nonPlayableCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nonPlayableCharacters_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__otherCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__otherCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__otherCharacters_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mainDBDPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__mainDBDPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mainDBDPlayers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__survivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterCollection_GetAllDBDPlayers, "GetAllDBDPlayers" }, // 62310005
		{ &Z_Construct_UFunction_UCharacterCollection_GetKiller, "GetKiller" }, // 992337585
		{ &Z_Construct_UFunction_UCharacterCollection_GetMainDBDPlayers, "GetMainDBDPlayers" }, // 1874054596
		{ &Z_Construct_UFunction_UCharacterCollection_GetSurvivors, "GetSurvivors" }, // 92566747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterCollection.h" },
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollection_Statics::NewProp__allCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__allCharacters = { "_allCharacters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterCollection, _allCharacters), METADATA_PARAMS(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__allCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__allCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__allCharacters_ElementProp = { "_allCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollection_Statics::NewProp__nonPlayableCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__nonPlayableCharacters = { "_nonPlayableCharacters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterCollection, _nonPlayableCharacters), METADATA_PARAMS(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__nonPlayableCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__nonPlayableCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__nonPlayableCharacters_ElementProp = { "_nonPlayableCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollection_Statics::NewProp__otherCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__otherCharacters = { "_otherCharacters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterCollection, _otherCharacters), METADATA_PARAMS(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__otherCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__otherCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__otherCharacters_ElementProp = { "_otherCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollection_Statics::NewProp__mainDBDPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__mainDBDPlayers = { "_mainDBDPlayers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterCollection, _mainDBDPlayers), METADATA_PARAMS(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__mainDBDPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__mainDBDPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__mainDBDPlayers_ElementProp = { "_mainDBDPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollection_Statics::NewProp__survivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__survivors = { "_survivors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterCollection, _survivors), METADATA_PARAMS(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__survivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__survivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__survivors_ElementProp = { "_survivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollection_Statics::NewProp__killer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCollection_Statics::NewProp__killer = { "_killer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterCollection, _killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::NewProp__killer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__allCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__allCharacters_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__nonPlayableCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__nonPlayableCharacters_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__otherCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__otherCharacters_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__mainDBDPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__mainDBDPlayers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__survivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__survivors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCollection_Statics::NewProp__killer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCollection_Statics::ClassParams = {
		&UCharacterCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterCollection, 2553115674);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterCollection>()
	{
		return UCharacterCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterCollection(Z_Construct_UClass_UCharacterCollection, &UCharacterCollection::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
