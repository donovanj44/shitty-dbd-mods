// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorKnowledgeCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorKnowledgeCollection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorKnowledgeCollection_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorKnowledgeCollection();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EKnowledgeSharingType();
// End Cross Module References
	DEFINE_FUNCTION(UActorKnowledgeCollection::execAuthority_Add)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Authority_Add(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execAuthority_Append)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Append(Z_Param_Out_actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execAuthority_Empty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Empty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execAuthority_Remove)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Remove(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execAuthority_SetAvailable)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetAvailable(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execAuthority_SetPossessor)
	{
		P_GET_OBJECT(ACharacter,Z_Param_possessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetPossessor(Z_Param_possessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execAuthority_SetSharingType)
	{
		P_GET_ENUM(EKnowledgeSharingType,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetSharingType(EKnowledgeSharingType(Z_Param_value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execContains)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Contains(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execIsAvailable)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAvailable(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorKnowledgeCollection::execLocal_SetAvailable)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_SetAvailable(Z_Param_value);
		P_NATIVE_END;
	}
	void UActorKnowledgeCollection::StaticRegisterNativesUActorKnowledgeCollection()
	{
		UClass* Class = UActorKnowledgeCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_Add", &UActorKnowledgeCollection::execAuthority_Add },
			{ "Authority_Append", &UActorKnowledgeCollection::execAuthority_Append },
			{ "Authority_Empty", &UActorKnowledgeCollection::execAuthority_Empty },
			{ "Authority_Remove", &UActorKnowledgeCollection::execAuthority_Remove },
			{ "Authority_SetAvailable", &UActorKnowledgeCollection::execAuthority_SetAvailable },
			{ "Authority_SetPossessor", &UActorKnowledgeCollection::execAuthority_SetPossessor },
			{ "Authority_SetSharingType", &UActorKnowledgeCollection::execAuthority_SetSharingType },
			{ "Contains", &UActorKnowledgeCollection::execContains },
			{ "IsAvailable", &UActorKnowledgeCollection::execIsAvailable },
			{ "Local_SetAvailable", &UActorKnowledgeCollection::execLocal_SetAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics
	{
		struct ActorKnowledgeCollection_eventAuthority_Add_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorKnowledgeCollection_eventAuthority_Add_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorKnowledgeCollection_eventAuthority_Add_Parms), &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorKnowledgeCollection_eventAuthority_Add_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Authority_Add", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventAuthority_Add_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics
	{
		struct ActorKnowledgeCollection_eventAuthority_Append_Parms
		{
			TArray<AActor*> actors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::NewProp_actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::NewProp_actors = { "actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorKnowledgeCollection_eventAuthority_Append_Parms, actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::NewProp_actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::NewProp_actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::NewProp_actors_Inner = { "actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::NewProp_actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::NewProp_actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Authority_Append", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventAuthority_Append_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Authority_Empty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics
	{
		struct ActorKnowledgeCollection_eventAuthority_Remove_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorKnowledgeCollection_eventAuthority_Remove_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Authority_Remove", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventAuthority_Remove_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics
	{
		struct ActorKnowledgeCollection_eventAuthority_SetAvailable_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::NewProp_value_SetBit(void* Obj)
	{
		((ActorKnowledgeCollection_eventAuthority_SetAvailable_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorKnowledgeCollection_eventAuthority_SetAvailable_Parms), &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Authority_SetAvailable", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventAuthority_SetAvailable_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics
	{
		struct ActorKnowledgeCollection_eventAuthority_SetPossessor_Parms
		{
			ACharacter* possessor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_possessor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::NewProp_possessor = { "possessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorKnowledgeCollection_eventAuthority_SetPossessor_Parms, possessor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::NewProp_possessor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Authority_SetPossessor", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventAuthority_SetPossessor_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics
	{
		struct ActorKnowledgeCollection_eventAuthority_SetSharingType_Parms
		{
			EKnowledgeSharingType value;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_value_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorKnowledgeCollection_eventAuthority_SetSharingType_Parms, value), Z_Construct_UEnum_DeadByDaylight_EKnowledgeSharingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::NewProp_value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::NewProp_value_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Authority_SetSharingType", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventAuthority_SetSharingType_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics
	{
		struct ActorKnowledgeCollection_eventContains_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorKnowledgeCollection_eventContains_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorKnowledgeCollection_eventContains_Parms), &Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorKnowledgeCollection_eventContains_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Contains", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventContains_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Contains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Contains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics
	{
		struct ActorKnowledgeCollection_eventIsAvailable_Parms
		{
			const ACharacter* character;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorKnowledgeCollection_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorKnowledgeCollection_eventIsAvailable_Parms), &Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorKnowledgeCollection_eventIsAvailable_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "IsAvailable", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventIsAvailable_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics
	{
		struct ActorKnowledgeCollection_eventLocal_SetAvailable_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::NewProp_value_SetBit(void* Obj)
	{
		((ActorKnowledgeCollection_eventLocal_SetAvailable_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorKnowledgeCollection_eventLocal_SetAvailable_Parms), &Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorKnowledgeCollection, nullptr, "Local_SetAvailable", nullptr, nullptr, sizeof(ActorKnowledgeCollection_eventLocal_SetAvailable_Parms), Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorKnowledgeCollection_NoRegister()
	{
		return UActorKnowledgeCollection::StaticClass();
	}
	struct Z_Construct_UClass_UActorKnowledgeCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sharing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__sharing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sharing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__possessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__possessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__available_MetaData[];
#endif
		static void NewProp__available_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__available;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorKnowledgeCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorKnowledgeCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Add, "Authority_Add" }, // 4264039220
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Append, "Authority_Append" }, // 14564982
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Empty, "Authority_Empty" }, // 3624937786
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_Remove, "Authority_Remove" }, // 1869188890
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetAvailable, "Authority_SetAvailable" }, // 957069043
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetPossessor, "Authority_SetPossessor" }, // 1051754759
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Authority_SetSharingType, "Authority_SetSharingType" }, // 3232079674
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Contains, "Contains" }, // 2827497830
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_IsAvailable, "IsAvailable" }, // 4041779255
		{ &Z_Construct_UFunction_UActorKnowledgeCollection_Local_SetAvailable, "Local_SetAvailable" }, // 3562209753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorKnowledgeCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorKnowledgeCollection.h" },
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__sharing_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__sharing = { "_sharing", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorKnowledgeCollection, _sharing), Z_Construct_UEnum_DeadByDaylight_EKnowledgeSharingType, METADATA_PARAMS(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__sharing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__sharing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__sharing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__possessor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__possessor = { "_possessor", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorKnowledgeCollection, _possessor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__possessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__possessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__available_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	void Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__available_SetBit(void* Obj)
	{
		((UActorKnowledgeCollection*)Obj)->_available = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__available = { "_available", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorKnowledgeCollection), &Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__available_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__available_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__available_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorKnowledgeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__actors = { "_actors", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorKnowledgeCollection, _actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__actors_Inner = { "_actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorKnowledgeCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__sharing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__sharing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__possessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__available,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorKnowledgeCollection_Statics::NewProp__actors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorKnowledgeCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorKnowledgeCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorKnowledgeCollection_Statics::ClassParams = {
		&UActorKnowledgeCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorKnowledgeCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorKnowledgeCollection_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorKnowledgeCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorKnowledgeCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorKnowledgeCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorKnowledgeCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorKnowledgeCollection, 2872490936);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActorKnowledgeCollection>()
	{
		return UActorKnowledgeCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorKnowledgeCollection(Z_Construct_UClass_UActorKnowledgeCollection, &UActorKnowledgeCollection::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActorKnowledgeCollection"), false, nullptr, nullptr, nullptr);

	void UActorKnowledgeCollection::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__actors(TEXT("_actors"));
		static const FName Name__available(TEXT("_available"));
		static const FName Name__possessor(TEXT("_possessor"));
		static const FName Name__sharing(TEXT("_sharing"));

		const bool bIsValid = true
			&& Name__actors == ClassReps[(int32)ENetFields_Private::_actors].Property->GetFName()
			&& Name__available == ClassReps[(int32)ENetFields_Private::_available].Property->GetFName()
			&& Name__possessor == ClassReps[(int32)ENetFields_Private::_possessor].Property->GetFName()
			&& Name__sharing == ClassReps[(int32)ENetFields_Private::_sharing].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UActorKnowledgeCollection"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorKnowledgeCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
