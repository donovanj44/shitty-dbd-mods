// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorComponentExt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorComponentExt() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorComponentExt_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorComponentExt();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningCharacter)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=UActorComponentExt::GetOwningCharacter(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningCharacterChecked)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=UActorComponentExt::GetOwningCharacterChecked(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningKiller)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=UActorComponentExt::GetOwningKiller(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningPawn)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=UActorComponentExt::GetOwningPawn(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningPawnChecked)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=UActorComponentExt::GetOwningPawnChecked(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningPlayer)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=UActorComponentExt::GetOwningPlayer(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningPlayerChecked)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=UActorComponentExt::GetOwningPlayerChecked(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningPlayerInHierarchy)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=UActorComponentExt::GetOwningPlayerInHierarchy(Z_Param_actorComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningSurvivor)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=UActorComponentExt::GetOwningSurvivor(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetOwningSurvivorChecked)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=UActorComponentExt::GetOwningSurvivorChecked(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execGetValidatedOwner)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UActorComponentExt::GetValidatedOwner(Z_Param_actorComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execHasAuthority)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorComponentExt::HasAuthority(Z_Param_actorComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execIsLocallyControlled)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorComponentExt::IsLocallyControlled(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponentExt::execIsLocallyObserved)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorComponentExt::IsLocallyObserved(Z_Param_actorComponent,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	void UActorComponentExt::StaticRegisterNativesUActorComponentExt()
	{
		UClass* Class = UActorComponentExt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningCharacter", &UActorComponentExt::execGetOwningCharacter },
			{ "GetOwningCharacterChecked", &UActorComponentExt::execGetOwningCharacterChecked },
			{ "GetOwningKiller", &UActorComponentExt::execGetOwningKiller },
			{ "GetOwningPawn", &UActorComponentExt::execGetOwningPawn },
			{ "GetOwningPawnChecked", &UActorComponentExt::execGetOwningPawnChecked },
			{ "GetOwningPlayer", &UActorComponentExt::execGetOwningPlayer },
			{ "GetOwningPlayerChecked", &UActorComponentExt::execGetOwningPlayerChecked },
			{ "GetOwningPlayerInHierarchy", &UActorComponentExt::execGetOwningPlayerInHierarchy },
			{ "GetOwningSurvivor", &UActorComponentExt::execGetOwningSurvivor },
			{ "GetOwningSurvivorChecked", &UActorComponentExt::execGetOwningSurvivorChecked },
			{ "GetValidatedOwner", &UActorComponentExt::execGetValidatedOwner },
			{ "HasAuthority", &UActorComponentExt::execHasAuthority },
			{ "IsLocallyControlled", &UActorComponentExt::execIsLocallyControlled },
			{ "IsLocallyObserved", &UActorComponentExt::execIsLocallyObserved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics
	{
		struct ActorComponentExt_eventGetOwningCharacter_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningCharacter_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningCharacter_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningCharacter_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningCharacter", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningCharacter_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics
	{
		struct ActorComponentExt_eventGetOwningCharacterChecked_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningCharacterChecked_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningCharacterChecked_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningCharacterChecked_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningCharacterChecked_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningCharacterChecked", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningCharacterChecked_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics
	{
		struct ActorComponentExt_eventGetOwningKiller_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningKiller_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningKiller_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningKiller_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningKiller", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningKiller_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics
	{
		struct ActorComponentExt_eventGetOwningPawn_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningPawn_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningPawn_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPawn_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningPawn", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningPawn_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics
	{
		struct ActorComponentExt_eventGetOwningPawnChecked_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPawnChecked_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningPawnChecked_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningPawnChecked_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPawnChecked_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningPawnChecked", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningPawnChecked_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics
	{
		struct ActorComponentExt_eventGetOwningPlayer_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningPlayer_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningPlayer_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPlayer_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningPlayer", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningPlayer_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics
	{
		struct ActorComponentExt_eventGetOwningPlayerChecked_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPlayerChecked_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningPlayerChecked_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningPlayerChecked_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPlayerChecked_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningPlayerChecked", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningPlayerChecked_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics
	{
		struct ActorComponentExt_eventGetOwningPlayerInHierarchy_Parms
		{
			const UActorComponent* actorComponent;
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPlayerInHierarchy_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningPlayerInHierarchy_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningPlayerInHierarchy", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningPlayerInHierarchy_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics
	{
		struct ActorComponentExt_eventGetOwningSurvivor_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningSurvivor_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningSurvivor_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningSurvivor_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningSurvivor", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningSurvivor_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics
	{
		struct ActorComponentExt_eventGetOwningSurvivorChecked_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningSurvivorChecked_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventGetOwningSurvivorChecked_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventGetOwningSurvivorChecked_Parms), &Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetOwningSurvivorChecked_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetOwningSurvivorChecked", nullptr, nullptr, sizeof(ActorComponentExt_eventGetOwningSurvivorChecked_Parms), Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics
	{
		struct ActorComponentExt_eventGetValidatedOwner_Parms
		{
			const UActorComponent* actorComponent;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetValidatedOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventGetValidatedOwner_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "GetValidatedOwner", nullptr, nullptr, sizeof(ActorComponentExt_eventGetValidatedOwner_Parms), Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics
	{
		struct ActorComponentExt_eventHasAuthority_Parms
		{
			const UActorComponent* actorComponent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorComponentExt_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventHasAuthority_Parms), &Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventHasAuthority_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "HasAuthority", nullptr, nullptr, sizeof(ActorComponentExt_eventHasAuthority_Parms), Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics
	{
		struct ActorComponentExt_eventIsLocallyControlled_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorComponentExt_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventIsLocallyControlled_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventIsLocallyControlled_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(ActorComponentExt_eventIsLocallyControlled_Parms), Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics
	{
		struct ActorComponentExt_eventIsLocallyObserved_Parms
		{
			const UActorComponent* actorComponent;
			bool recursiveSearch;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorComponentExt_eventIsLocallyObserved_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventIsLocallyObserved_Parms), &Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((ActorComponentExt_eventIsLocallyObserved_Parms*)Obj)->recursiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorComponentExt_eventIsLocallyObserved_Parms), &Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorComponentExt_eventIsLocallyObserved_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_recursiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponentExt, nullptr, "IsLocallyObserved", nullptr, nullptr, sizeof(ActorComponentExt_eventIsLocallyObserved_Parms), Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorComponentExt_NoRegister()
	{
		return UActorComponentExt::StaticClass();
	}
	struct Z_Construct_UClass_UActorComponentExt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorComponentExt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorComponentExt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningCharacter, "GetOwningCharacter" }, // 2975459632
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningCharacterChecked, "GetOwningCharacterChecked" }, // 3951403495
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningKiller, "GetOwningKiller" }, // 2161330700
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningPawn, "GetOwningPawn" }, // 2791104341
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningPawnChecked, "GetOwningPawnChecked" }, // 2550130021
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningPlayer, "GetOwningPlayer" }, // 1150303527
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerChecked, "GetOwningPlayerChecked" }, // 2275765267
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningPlayerInHierarchy, "GetOwningPlayerInHierarchy" }, // 3806231817
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivor, "GetOwningSurvivor" }, // 460063977
		{ &Z_Construct_UFunction_UActorComponentExt_GetOwningSurvivorChecked, "GetOwningSurvivorChecked" }, // 2385304997
		{ &Z_Construct_UFunction_UActorComponentExt_GetValidatedOwner, "GetValidatedOwner" }, // 1967670798
		{ &Z_Construct_UFunction_UActorComponentExt_HasAuthority, "HasAuthority" }, // 2271465213
		{ &Z_Construct_UFunction_UActorComponentExt_IsLocallyControlled, "IsLocallyControlled" }, // 1492870918
		{ &Z_Construct_UFunction_UActorComponentExt_IsLocallyObserved, "IsLocallyObserved" }, // 3510576784
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponentExt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorComponentExt.h" },
		{ "ModuleRelativePath", "Public/ActorComponentExt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorComponentExt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorComponentExt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorComponentExt_Statics::ClassParams = {
		&UActorComponentExt::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorComponentExt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponentExt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorComponentExt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorComponentExt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorComponentExt, 423997056);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActorComponentExt>()
	{
		return UActorComponentExt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorComponentExt(Z_Construct_UClass_UActorComponentExt, &UActorComponentExt::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActorComponentExt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorComponentExt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
