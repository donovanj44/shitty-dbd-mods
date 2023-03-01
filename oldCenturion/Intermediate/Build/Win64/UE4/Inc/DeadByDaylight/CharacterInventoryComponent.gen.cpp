// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterInventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInventoryComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterInventoryComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterInventoryComponent::execAddToInventory)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_GET_ENUM(EInventoryType,Z_Param_inventoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToInventory(Z_Param_item,EInventoryType(Z_Param_inventoryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execAuthority_UseInventoryItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_UseInventoryItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execClearAndDestroyInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAndDestroyInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execCollect)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_GET_ENUM(EInventoryType,Z_Param_inventoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Collect(Z_Param_item,EInventoryType(Z_Param_inventoryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execDrop)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_GET_UBOOL(Z_Param_onDeath);
		P_GET_UBOOL(Z_Param_adjustToGround);
		P_GET_UBOOL(Z_Param_dropInChest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop(Z_Param_item,Z_Param_Out_location,Z_Param_Out_rotation,Z_Param_onDeath,Z_Param_adjustToGround,Z_Param_dropInChest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execEquipItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execGetAddons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItemAddon*>*)Z_Param__Result=P_THIS->GetAddons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execGetFirstItemFromInventory)
	{
		P_GET_OBJECT(UClass,Z_Param_item);
		P_GET_ENUM(EInventoryType,Z_Param_inventoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACollectable**)Z_Param__Result=P_THIS->GetFirstItemFromInventory(Z_Param_item,EInventoryType(Z_Param_inventoryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execGetItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACollectable**)Z_Param__Result=P_THIS->GetItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execGetItemCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execGetItemCountByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemCountByID(Z_Param_itemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execGetItemID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetItemID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execHasEquippedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEquippedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execHasInInventory)
	{
		P_GET_OBJECT(UClass,Z_Param_item);
		P_GET_ENUM(EInventoryType,Z_Param_inventoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasInInventory(Z_Param_item,EInventoryType(Z_Param_inventoryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execHasItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execHasMaximumItemCount)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMaximumItemCount(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execHasStoredItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStoredItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execIsUsingAimItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAimItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execMulticast_AddToInventory)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_GET_ENUM(EInventoryType,Z_Param_inventoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddToInventory_Implementation(Z_Param_item,EInventoryType(Z_Param_inventoryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execMulticast_ClearAndDestroyInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ClearAndDestroyInventory_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execMulticast_RemoveFromInventory)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveFromInventory_Implementation(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execOnRep_BackpackInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BackpackInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execOnRep_GeneralAddons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GeneralAddons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execOnRep_Inventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Inventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execRemoveFromInventory)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromInventory(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execSpawnCollectedItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACollectable**)Z_Param__Result=P_THIS->SpawnCollectedItem(Z_Param_itemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execStartDrop)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDrop(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execStoreItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StoreItem();
		P_NATIVE_END;
	}
	static FName NAME_UCharacterInventoryComponent_Multicast_AddToInventory = FName(TEXT("Multicast_AddToInventory"));
	void UCharacterInventoryComponent::Multicast_AddToInventory(ACollectable* item, EInventoryType inventoryType)
	{
		CharacterInventoryComponent_eventMulticast_AddToInventory_Parms Parms;
		Parms.item=item;
		Parms.inventoryType=inventoryType;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterInventoryComponent_Multicast_AddToInventory),&Parms);
	}
	static FName NAME_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory = FName(TEXT("Multicast_ClearAndDestroyInventory"));
	void UCharacterInventoryComponent::Multicast_ClearAndDestroyInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory),NULL);
	}
	static FName NAME_UCharacterInventoryComponent_Multicast_RemoveFromInventory = FName(TEXT("Multicast_RemoveFromInventory"));
	void UCharacterInventoryComponent::Multicast_RemoveFromInventory(ACollectable* item)
	{
		CharacterInventoryComponent_eventMulticast_RemoveFromInventory_Parms Parms;
		Parms.item=item;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterInventoryComponent_Multicast_RemoveFromInventory),&Parms);
	}
	void UCharacterInventoryComponent::StaticRegisterNativesUCharacterInventoryComponent()
	{
		UClass* Class = UCharacterInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &UCharacterInventoryComponent::execAddToInventory },
			{ "Authority_UseInventoryItem", &UCharacterInventoryComponent::execAuthority_UseInventoryItem },
			{ "ClearAndDestroyInventory", &UCharacterInventoryComponent::execClearAndDestroyInventory },
			{ "Collect", &UCharacterInventoryComponent::execCollect },
			{ "Drop", &UCharacterInventoryComponent::execDrop },
			{ "EquipItem", &UCharacterInventoryComponent::execEquipItem },
			{ "GetAddons", &UCharacterInventoryComponent::execGetAddons },
			{ "GetFirstItemFromInventory", &UCharacterInventoryComponent::execGetFirstItemFromInventory },
			{ "GetItem", &UCharacterInventoryComponent::execGetItem },
			{ "GetItemCount", &UCharacterInventoryComponent::execGetItemCount },
			{ "GetItemCountByID", &UCharacterInventoryComponent::execGetItemCountByID },
			{ "GetItemID", &UCharacterInventoryComponent::execGetItemID },
			{ "HasEquippedItem", &UCharacterInventoryComponent::execHasEquippedItem },
			{ "HasInInventory", &UCharacterInventoryComponent::execHasInInventory },
			{ "HasItem", &UCharacterInventoryComponent::execHasItem },
			{ "HasMaximumItemCount", &UCharacterInventoryComponent::execHasMaximumItemCount },
			{ "HasStoredItem", &UCharacterInventoryComponent::execHasStoredItem },
			{ "IsUsingAimItem", &UCharacterInventoryComponent::execIsUsingAimItem },
			{ "Multicast_AddToInventory", &UCharacterInventoryComponent::execMulticast_AddToInventory },
			{ "Multicast_ClearAndDestroyInventory", &UCharacterInventoryComponent::execMulticast_ClearAndDestroyInventory },
			{ "Multicast_RemoveFromInventory", &UCharacterInventoryComponent::execMulticast_RemoveFromInventory },
			{ "OnRep_BackpackInventory", &UCharacterInventoryComponent::execOnRep_BackpackInventory },
			{ "OnRep_GeneralAddons", &UCharacterInventoryComponent::execOnRep_GeneralAddons },
			{ "OnRep_Inventory", &UCharacterInventoryComponent::execOnRep_Inventory },
			{ "RemoveFromInventory", &UCharacterInventoryComponent::execRemoveFromInventory },
			{ "SpawnCollectedItem", &UCharacterInventoryComponent::execSpawnCollectedItem },
			{ "StartDrop", &UCharacterInventoryComponent::execStartDrop },
			{ "StoreItem", &UCharacterInventoryComponent::execStoreItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics
	{
		struct CharacterInventoryComponent_eventAddToInventory_Parms
		{
			ACollectable* item;
			EInventoryType inventoryType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inventoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inventoryType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::NewProp_inventoryType = { "inventoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventAddToInventory_Parms, inventoryType), Z_Construct_UEnum_DeadByDaylight_EInventoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::NewProp_inventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventAddToInventory_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::NewProp_inventoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::NewProp_inventoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "AddToInventory", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventAddToInventory_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Authority_UseInventoryItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "ClearAndDestroyInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics
	{
		struct CharacterInventoryComponent_eventCollect_Parms
		{
			ACollectable* item;
			EInventoryType inventoryType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inventoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inventoryType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::NewProp_inventoryType = { "inventoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventCollect_Parms, inventoryType), Z_Construct_UEnum_DeadByDaylight_EInventoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::NewProp_inventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventCollect_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::NewProp_inventoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::NewProp_inventoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Collect", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventCollect_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Collect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Collect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics
	{
		struct CharacterInventoryComponent_eventDrop_Parms
		{
			ACollectable* item;
			FVector location;
			FRotator rotation;
			bool onDeath;
			bool adjustToGround;
			bool dropInChest;
		};
		static void NewProp_dropInChest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dropInChest;
		static void NewProp_adjustToGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_adjustToGround;
		static void NewProp_onDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_onDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_dropInChest_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventDrop_Parms*)Obj)->dropInChest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_dropInChest = { "dropInChest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventDrop_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_dropInChest_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_adjustToGround_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventDrop_Parms*)Obj)->adjustToGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_adjustToGround = { "adjustToGround", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventDrop_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_adjustToGround_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_onDeath_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventDrop_Parms*)Obj)->onDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_onDeath = { "onDeath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventDrop_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_onDeath_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventDrop_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventDrop_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventDrop_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_dropInChest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_adjustToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_onDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Drop", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventDrop_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "EquipItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics
	{
		struct CharacterInventoryComponent_eventGetAddons_Parms
		{
			TArray<UItemAddon*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetAddons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "GetAddons", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventGetAddons_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics
	{
		struct CharacterInventoryComponent_eventGetFirstItemFromInventory_Parms
		{
			TSubclassOf<ACollectable>  item;
			EInventoryType inventoryType;
			ACollectable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inventoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inventoryType_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetFirstItemFromInventory_Parms, ReturnValue), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_inventoryType = { "inventoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetFirstItemFromInventory_Parms, inventoryType), Z_Construct_UEnum_DeadByDaylight_EInventoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_inventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetFirstItemFromInventory_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_inventoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_inventoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "GetFirstItemFromInventory", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventGetFirstItemFromInventory_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics
	{
		struct CharacterInventoryComponent_eventGetItem_Parms
		{
			ACollectable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "GetItem", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventGetItem_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics
	{
		struct CharacterInventoryComponent_eventGetItemCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetItemCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "GetItemCount", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventGetItemCount_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics
	{
		struct CharacterInventoryComponent_eventGetItemCountByID_Parms
		{
			FName itemID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetItemCountByID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetItemCountByID_Parms, itemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::NewProp_itemID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "GetItemCountByID", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventGetItemCountByID_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics
	{
		struct CharacterInventoryComponent_eventGetItemID_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventGetItemID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "GetItemID", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventGetItemID_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics
	{
		struct CharacterInventoryComponent_eventHasEquippedItem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventHasEquippedItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventHasEquippedItem_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "HasEquippedItem", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventHasEquippedItem_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics
	{
		struct CharacterInventoryComponent_eventHasInInventory_Parms
		{
			TSubclassOf<ACollectable>  item;
			EInventoryType inventoryType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inventoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inventoryType_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventHasInInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventHasInInventory_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_inventoryType = { "inventoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventHasInInventory_Parms, inventoryType), Z_Construct_UEnum_DeadByDaylight_EInventoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_inventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventHasInInventory_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_inventoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_inventoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "HasInInventory", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventHasInInventory_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics
	{
		struct CharacterInventoryComponent_eventHasItem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventHasItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventHasItem_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "HasItem", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventHasItem_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_HasItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_HasItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics
	{
		struct CharacterInventoryComponent_eventHasMaximumItemCount_Parms
		{
			const ACollectable* item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventHasMaximumItemCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventHasMaximumItemCount_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventHasMaximumItemCount_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "HasMaximumItemCount", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventHasMaximumItemCount_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics
	{
		struct CharacterInventoryComponent_eventHasStoredItem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventHasStoredItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventHasStoredItem_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "HasStoredItem", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventHasStoredItem_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics
	{
		struct CharacterInventoryComponent_eventIsUsingAimItem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventIsUsingAimItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventIsUsingAimItem_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "IsUsingAimItem", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventIsUsingAimItem_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inventoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inventoryType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::NewProp_inventoryType = { "inventoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventMulticast_AddToInventory_Parms, inventoryType), Z_Construct_UEnum_DeadByDaylight_EInventoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::NewProp_inventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventMulticast_AddToInventory_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::NewProp_inventoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::NewProp_inventoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Multicast_AddToInventory", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventMulticast_AddToInventory_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Multicast_ClearAndDestroyInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventMulticast_RemoveFromInventory_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Multicast_RemoveFromInventory", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventMulticast_RemoveFromInventory_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "OnRep_BackpackInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "OnRep_GeneralAddons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "OnRep_Inventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics
	{
		struct CharacterInventoryComponent_eventRemoveFromInventory_Parms
		{
			ACollectable* item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventRemoveFromInventory_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "RemoveFromInventory", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventRemoveFromInventory_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics
	{
		struct CharacterInventoryComponent_eventSpawnCollectedItem_Parms
		{
			FName itemID;
			ACollectable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventSpawnCollectedItem_Parms, ReturnValue), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventSpawnCollectedItem_Parms, itemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::NewProp_itemID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "SpawnCollectedItem", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventSpawnCollectedItem_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics
	{
		struct CharacterInventoryComponent_eventStartDrop_Parms
		{
			ACollectable* item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventStartDrop_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "StartDrop", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventStartDrop_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "StoreItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterInventoryComponent_NoRegister()
	{
		return UCharacterInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allAddons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__allAddons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__allAddons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backpackInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__backpackInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__backpackInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generalAddons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__generalAddons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generalAddons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inventory_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_AddToInventory, "AddToInventory" }, // 878548057
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Authority_UseInventoryItem, "Authority_UseInventoryItem" }, // 1075206021
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_ClearAndDestroyInventory, "ClearAndDestroyInventory" }, // 3266746702
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Collect, "Collect" }, // 4280074409
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Drop, "Drop" }, // 3087817487
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_EquipItem, "EquipItem" }, // 130279148
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_GetAddons, "GetAddons" }, // 2675775546
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_GetFirstItemFromInventory, "GetFirstItemFromInventory" }, // 2304180822
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_GetItem, "GetItem" }, // 876456567
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCount, "GetItemCount" }, // 2952848576
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_GetItemCountByID, "GetItemCountByID" }, // 3856984965
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_GetItemID, "GetItemID" }, // 1926685725
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_HasEquippedItem, "HasEquippedItem" }, // 1519469647
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_HasInInventory, "HasInInventory" }, // 2326013075
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_HasItem, "HasItem" }, // 2485133029
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_HasMaximumItemCount, "HasMaximumItemCount" }, // 3172846779
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_HasStoredItem, "HasStoredItem" }, // 1609665859
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_IsUsingAimItem, "IsUsingAimItem" }, // 368914429
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_AddToInventory, "Multicast_AddToInventory" }, // 3089395528
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_ClearAndDestroyInventory, "Multicast_ClearAndDestroyInventory" }, // 849649456
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Multicast_RemoveFromInventory, "Multicast_RemoveFromInventory" }, // 665359654
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_BackpackInventory, "OnRep_BackpackInventory" }, // 3663578768
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_GeneralAddons, "OnRep_GeneralAddons" }, // 837667627
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_Inventory, "OnRep_Inventory" }, // 1070173142
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_RemoveFromInventory, "RemoveFromInventory" }, // 2067210026
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_SpawnCollectedItem, "SpawnCollectedItem" }, // 677563357
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_StartDrop, "StartDrop" }, // 2321508733
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_StoreItem, "StoreItem" }, // 4004708500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__allAddons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__allAddons = { "_allAddons", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterInventoryComponent, _allAddons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__allAddons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__allAddons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__allAddons_Inner = { "_allAddons", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__backpackInventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__backpackInventory = { "_backpackInventory", "OnRep_BackpackInventory", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterInventoryComponent, _backpackInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__backpackInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__backpackInventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__backpackInventory_Inner = { "_backpackInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__generalAddons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__generalAddons = { "_generalAddons", "OnRep_GeneralAddons", (EPropertyFlags)0x0040008100002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterInventoryComponent, _generalAddons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__generalAddons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__generalAddons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__generalAddons_Inner = { "_generalAddons", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__inventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__inventory = { "_inventory", "OnRep_Inventory", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterInventoryComponent, _inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__inventory_Inner = { "_inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__allAddons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__allAddons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__backpackInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__backpackInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__generalAddons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__generalAddons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp__inventory_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::ClassParams = {
		&UCharacterInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterInventoryComponent, 1238455217);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterInventoryComponent>()
	{
		return UCharacterInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterInventoryComponent(Z_Construct_UClass_UCharacterInventoryComponent, &UCharacterInventoryComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterInventoryComponent"), false, nullptr, nullptr, nullptr);

	void UCharacterInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__inventory(TEXT("_inventory"));
		static const FName Name__generalAddons(TEXT("_generalAddons"));
		static const FName Name__backpackInventory(TEXT("_backpackInventory"));

		const bool bIsValid = true
			&& Name__inventory == ClassReps[(int32)ENetFields_Private::_inventory].Property->GetFName()
			&& Name__generalAddons == ClassReps[(int32)ENetFields_Private::_generalAddons].Property->GetFName()
			&& Name__backpackInventory == ClassReps[(int32)ENetFields_Private::_backpackInventory].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCharacterInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
