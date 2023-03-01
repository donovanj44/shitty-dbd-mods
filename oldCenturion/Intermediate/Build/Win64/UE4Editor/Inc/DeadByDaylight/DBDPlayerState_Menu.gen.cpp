// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerState_Menu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerState_Menu() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_Menu_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_Menu();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELoadoutSlot();
// End Cross Module References
	DEFINE_FUNCTION(ADBDPlayerState_Menu::execMulticast_SetSelectedCharacterCustomizationCharms)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_forRole);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_TARRAY(FCharmIdSlot,Z_Param_customizationCharms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_customizationCharms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState_Menu::execMulticast_SetSelectedCharacterCustomizationMesh)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_forRole);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_TARRAY(FName,Z_Param_customizationItemIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_customizationItemIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState_Menu::execServer_SetEquipment)
	{
		P_GET_ENUM(ELoadoutSlot,Z_Param_slot);
		P_GET_PROPERTY(FNameProperty,Z_Param_itemId);
		P_GET_UBOOL(Z_Param_callOnRep);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetEquipment_Validate(ELoadoutSlot(Z_Param_slot),Z_Param_itemId,Z_Param_callOnRep))
		{
			RPC_ValidateFailed(TEXT("Server_SetEquipment_Validate"));
			return;
		}
		P_THIS->Server_SetEquipment_Implementation(ELoadoutSlot(Z_Param_slot),Z_Param_itemId,Z_Param_callOnRep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState_Menu::execServer_SetSelectedCharacterCustomizationCharms)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_forRole);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_TARRAY(FCharmIdSlot,Z_Param_customizationCharms);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSelectedCharacterCustomizationCharms_Validate(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_customizationCharms))
		{
			RPC_ValidateFailed(TEXT("Server_SetSelectedCharacterCustomizationCharms_Validate"));
			return;
		}
		P_THIS->Server_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_customizationCharms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState_Menu::execServer_SetSelectedCharacterCustomizationMesh)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_forRole);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_TARRAY(FName,Z_Param_customizationItemIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSelectedCharacterCustomizationMesh_Validate(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_customizationItemIds))
		{
			RPC_ValidateFailed(TEXT("Server_SetSelectedCharacterCustomizationMesh_Validate"));
			return;
		}
		P_THIS->Server_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_customizationItemIds);
		P_NATIVE_END;
	}
	static FName NAME_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms = FName(TEXT("Multicast_SetSelectedCharacterCustomizationCharms"));
	void ADBDPlayerState_Menu::Multicast_SetSelectedCharacterCustomizationCharms(EPlayerRole forRole, int32 id, TArray<FCharmIdSlot> const& customizationCharms)
	{
		DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationCharms_Parms Parms;
		Parms.forRole=forRole;
		Parms.id=id;
		Parms.customizationCharms=customizationCharms;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms),&Parms);
	}
	static FName NAME_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh = FName(TEXT("Multicast_SetSelectedCharacterCustomizationMesh"));
	void ADBDPlayerState_Menu::Multicast_SetSelectedCharacterCustomizationMesh(EPlayerRole forRole, int32 id, TArray<FName> const& customizationItemIds)
	{
		DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationMesh_Parms Parms;
		Parms.forRole=forRole;
		Parms.id=id;
		Parms.customizationItemIds=customizationItemIds;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh),&Parms);
	}
	static FName NAME_ADBDPlayerState_Menu_Server_SetEquipment = FName(TEXT("Server_SetEquipment"));
	void ADBDPlayerState_Menu::Server_SetEquipment(ELoadoutSlot slot, FName itemId, bool callOnRep)
	{
		DBDPlayerState_Menu_eventServer_SetEquipment_Parms Parms;
		Parms.slot=slot;
		Parms.itemId=itemId;
		Parms.callOnRep=callOnRep ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Menu_Server_SetEquipment),&Parms);
	}
	static FName NAME_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms = FName(TEXT("Server_SetSelectedCharacterCustomizationCharms"));
	void ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomizationCharms(EPlayerRole forRole, int32 id, TArray<FCharmIdSlot> const& customizationCharms)
	{
		DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationCharms_Parms Parms;
		Parms.forRole=forRole;
		Parms.id=id;
		Parms.customizationCharms=customizationCharms;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms),&Parms);
	}
	static FName NAME_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh = FName(TEXT("Server_SetSelectedCharacterCustomizationMesh"));
	void ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomizationMesh(EPlayerRole forRole, int32 id, TArray<FName> const& customizationItemIds)
	{
		DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationMesh_Parms Parms;
		Parms.forRole=forRole;
		Parms.id=id;
		Parms.customizationItemIds=customizationItemIds;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh),&Parms);
	}
	void ADBDPlayerState_Menu::StaticRegisterNativesADBDPlayerState_Menu()
	{
		UClass* Class = ADBDPlayerState_Menu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetSelectedCharacterCustomizationCharms", &ADBDPlayerState_Menu::execMulticast_SetSelectedCharacterCustomizationCharms },
			{ "Multicast_SetSelectedCharacterCustomizationMesh", &ADBDPlayerState_Menu::execMulticast_SetSelectedCharacterCustomizationMesh },
			{ "Server_SetEquipment", &ADBDPlayerState_Menu::execServer_SetEquipment },
			{ "Server_SetSelectedCharacterCustomizationCharms", &ADBDPlayerState_Menu::execServer_SetSelectedCharacterCustomizationCharms },
			{ "Server_SetSelectedCharacterCustomizationMesh", &ADBDPlayerState_Menu::execServer_SetSelectedCharacterCustomizationMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationCharms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customizationCharms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customizationCharms_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_forRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_forRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms = { "customizationCharms", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationCharms_Parms, customizationCharms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_Inner = { "customizationCharms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationCharms_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole = { "forRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationCharms_Parms, forRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState_Menu, nullptr, "Multicast_SetSelectedCharacterCustomizationCharms", nullptr, nullptr, sizeof(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationCharms_Parms), Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customizationItemIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_customizationItemIds_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_forRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_forRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds = { "customizationItemIds", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationMesh_Parms, customizationItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_Inner = { "customizationItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationMesh_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole = { "forRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationMesh_Parms, forRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState_Menu, nullptr, "Multicast_SetSelectedCharacterCustomizationMesh", nullptr, nullptr, sizeof(DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationMesh_Parms), Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics
	{
		static void NewProp_callOnRep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_callOnRep;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemId;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_callOnRep_SetBit(void* Obj)
	{
		((DBDPlayerState_Menu_eventServer_SetEquipment_Parms*)Obj)->callOnRep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_callOnRep = { "callOnRep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_Menu_eventServer_SetEquipment_Parms), &Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_callOnRep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetEquipment_Parms, itemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetEquipment_Parms, slot), Z_Construct_UEnum_DeadByDaylight_ELoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_callOnRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::NewProp_slot_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState_Menu, nullptr, "Server_SetEquipment", nullptr, nullptr, sizeof(DBDPlayerState_Menu_eventServer_SetEquipment_Parms), Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationCharms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customizationCharms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customizationCharms_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_forRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_forRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms = { "customizationCharms", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationCharms_Parms, customizationCharms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_Inner = { "customizationCharms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationCharms_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole = { "forRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationCharms_Parms, forRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_customizationCharms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::NewProp_forRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState_Menu, nullptr, "Server_SetSelectedCharacterCustomizationCharms", nullptr, nullptr, sizeof(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationCharms_Parms), Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customizationItemIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_customizationItemIds_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_forRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_forRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds = { "customizationItemIds", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationMesh_Parms, customizationItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_Inner = { "customizationItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationMesh_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole = { "forRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationMesh_Parms, forRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_customizationItemIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::NewProp_forRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState_Menu, nullptr, "Server_SetSelectedCharacterCustomizationMesh", nullptr, nullptr, sizeof(DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationMesh_Parms), Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDPlayerState_Menu_NoRegister()
	{
		return ADBDPlayerState_Menu::StaticClass();
	}
	struct Z_Construct_UClass_ADBDPlayerState_Menu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDPlayerState_Menu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDPlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDPlayerState_Menu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationCharms, "Multicast_SetSelectedCharacterCustomizationCharms" }, // 255574739
		{ &Z_Construct_UFunction_ADBDPlayerState_Menu_Multicast_SetSelectedCharacterCustomizationMesh, "Multicast_SetSelectedCharacterCustomizationMesh" }, // 46295040
		{ &Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetEquipment, "Server_SetEquipment" }, // 1106502408
		{ &Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationCharms, "Server_SetSelectedCharacterCustomizationCharms" }, // 1589832641
		{ &Z_Construct_UFunction_ADBDPlayerState_Menu_Server_SetSelectedCharacterCustomizationMesh, "Server_SetSelectedCharacterCustomizationMesh" }, // 2792562203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Menu_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDPlayerState_Menu.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerState_Menu.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDPlayerState_Menu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDPlayerState_Menu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDPlayerState_Menu_Statics::ClassParams = {
		&ADBDPlayerState_Menu::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Menu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Menu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDPlayerState_Menu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDPlayerState_Menu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDPlayerState_Menu, 249320079);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDPlayerState_Menu>()
	{
		return ADBDPlayerState_Menu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDPlayerState_Menu(Z_Construct_UClass_ADBDPlayerState_Menu, &ADBDPlayerState_Menu::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDPlayerState_Menu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDPlayerState_Menu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
