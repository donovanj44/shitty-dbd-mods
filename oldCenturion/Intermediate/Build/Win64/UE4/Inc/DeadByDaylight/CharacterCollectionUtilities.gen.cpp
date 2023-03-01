// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterCollectionUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCollectionUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterCollectionUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterCollectionUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetAllCharacters)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<ACharacter*>*)Z_Param__Result=UCharacterCollectionUtilities::GetAllCharacters(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetAllDBDPlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=UCharacterCollectionUtilities::GetAllDBDPlayers(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetCharactersByPlayerTeam)
	{
		P_GET_ENUM(EPlayerTeam,Z_Param_playerTeam);
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=UCharacterCollectionUtilities::GetCharactersByPlayerTeam(EPlayerTeam(Z_Param_playerTeam),Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetInGamePlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=UCharacterCollectionUtilities::GetInGamePlayers(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetInGameSurvivors)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ACamperPlayer*>*)Z_Param__Result=UCharacterCollectionUtilities::GetInGameSurvivors(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetInGameSurvivorsAsPlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=UCharacterCollectionUtilities::GetInGameSurvivorsAsPlayers(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetInGameSurvivorsByRef)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<ACamperPlayer*>*)Z_Param__Result=UCharacterCollectionUtilities::GetInGameSurvivorsByRef(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetKiller)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=UCharacterCollectionUtilities::GetKiller(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterCollectionUtilities::execGetNumberOfInjuredHookedOrDyingSurvivors)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCharacterCollectionUtilities::GetNumberOfInjuredHookedOrDyingSurvivors(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	void UCharacterCollectionUtilities::StaticRegisterNativesUCharacterCollectionUtilities()
	{
		UClass* Class = UCharacterCollectionUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllCharacters", &UCharacterCollectionUtilities::execGetAllCharacters },
			{ "GetAllDBDPlayers", &UCharacterCollectionUtilities::execGetAllDBDPlayers },
			{ "GetCharactersByPlayerTeam", &UCharacterCollectionUtilities::execGetCharactersByPlayerTeam },
			{ "GetInGamePlayers", &UCharacterCollectionUtilities::execGetInGamePlayers },
			{ "GetInGameSurvivors", &UCharacterCollectionUtilities::execGetInGameSurvivors },
			{ "GetInGameSurvivorsAsPlayers", &UCharacterCollectionUtilities::execGetInGameSurvivorsAsPlayers },
			{ "GetInGameSurvivorsByRef", &UCharacterCollectionUtilities::execGetInGameSurvivorsByRef },
			{ "GetKiller", &UCharacterCollectionUtilities::execGetKiller },
			{ "GetNumberOfInjuredHookedOrDyingSurvivors", &UCharacterCollectionUtilities::execGetNumberOfInjuredHookedOrDyingSurvivors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics
	{
		struct CharacterCollectionUtilities_eventGetAllCharacters_Parms
		{
			const UObject* worldContextObject;
			TSet<ACharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetAllCharacters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetAllCharacters_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetAllCharacters", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetAllCharacters_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics
	{
		struct CharacterCollectionUtilities_eventGetAllDBDPlayers_Parms
		{
			const UObject* worldContextObject;
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetAllDBDPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetAllDBDPlayers_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetAllDBDPlayers", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetAllDBDPlayers_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics
	{
		struct CharacterCollectionUtilities_eventGetCharactersByPlayerTeam_Parms
		{
			EPlayerTeam playerTeam;
			const UObject* worldContextObject;
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerTeam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerTeam_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetCharactersByPlayerTeam_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetCharactersByPlayerTeam_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_playerTeam = { "playerTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetCharactersByPlayerTeam_Parms, playerTeam), Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_playerTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_worldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_playerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::NewProp_playerTeam_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetCharactersByPlayerTeam", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetCharactersByPlayerTeam_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics
	{
		struct CharacterCollectionUtilities_eventGetInGamePlayers_Parms
		{
			const UObject* worldContextObject;
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGamePlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGamePlayers_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetInGamePlayers", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetInGamePlayers_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics
	{
		struct CharacterCollectionUtilities_eventGetInGameSurvivors_Parms
		{
			const UObject* worldContextObject;
			TArray<ACamperPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGameSurvivors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGameSurvivors_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetInGameSurvivors", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetInGameSurvivors_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics
	{
		struct CharacterCollectionUtilities_eventGetInGameSurvivorsAsPlayers_Parms
		{
			const UObject* worldContextObject;
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGameSurvivorsAsPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGameSurvivorsAsPlayers_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetInGameSurvivorsAsPlayers", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetInGameSurvivorsAsPlayers_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics
	{
		struct CharacterCollectionUtilities_eventGetInGameSurvivorsByRef_Parms
		{
			const UObject* worldContextObject;
			TSet<ACamperPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGameSurvivorsByRef_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetInGameSurvivorsByRef_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetInGameSurvivorsByRef", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetInGameSurvivorsByRef_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics
	{
		struct CharacterCollectionUtilities_eventGetKiller_Parms
		{
			const UObject* worldContextObject;
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetKiller_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetKiller", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetKiller_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics
	{
		struct CharacterCollectionUtilities_eventGetNumberOfInjuredHookedOrDyingSurvivors_Parms
		{
			const UObject* worldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetNumberOfInjuredHookedOrDyingSurvivors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterCollectionUtilities_eventGetNumberOfInjuredHookedOrDyingSurvivors_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterCollectionUtilities, nullptr, "GetNumberOfInjuredHookedOrDyingSurvivors", nullptr, nullptr, sizeof(CharacterCollectionUtilities_eventGetNumberOfInjuredHookedOrDyingSurvivors_Parms), Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterCollectionUtilities_NoRegister()
	{
		return UCharacterCollectionUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterCollectionUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterCollectionUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterCollectionUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllCharacters, "GetAllCharacters" }, // 1675123519
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetAllDBDPlayers, "GetAllDBDPlayers" }, // 1360456393
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetCharactersByPlayerTeam, "GetCharactersByPlayerTeam" }, // 1572864688
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGamePlayers, "GetInGamePlayers" }, // 3810812913
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivors, "GetInGameSurvivors" }, // 2001560091
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsAsPlayers, "GetInGameSurvivorsAsPlayers" }, // 2013848907
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetInGameSurvivorsByRef, "GetInGameSurvivorsByRef" }, // 3480169818
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetKiller, "GetKiller" }, // 3703844800
		{ &Z_Construct_UFunction_UCharacterCollectionUtilities_GetNumberOfInjuredHookedOrDyingSurvivors, "GetNumberOfInjuredHookedOrDyingSurvivors" }, // 2339048600
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollectionUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterCollectionUtilities.h" },
		{ "ModuleRelativePath", "Public/CharacterCollectionUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterCollectionUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCollectionUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCollectionUtilities_Statics::ClassParams = {
		&UCharacterCollectionUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterCollectionUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollectionUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterCollectionUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterCollectionUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterCollectionUtilities, 58010012);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterCollectionUtilities>()
	{
		return UCharacterCollectionUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterCollectionUtilities(Z_Construct_UClass_UCharacterCollectionUtilities, &UCharacterCollectionUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterCollectionUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCollectionUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
