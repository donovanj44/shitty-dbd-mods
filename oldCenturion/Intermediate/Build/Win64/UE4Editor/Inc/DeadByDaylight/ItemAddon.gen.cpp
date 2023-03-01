// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAddon() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemModifier();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddonInitializationData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UItemAddon::execAuthority_ApplyMetaModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ApplyMetaModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAddon::execAuthority_OnCollectablePickedUp)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCollectablePickedUp_Implementation(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAddon::execIsReadyForSetUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReadyForSetUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAddon::execIsSecondaryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSecondaryAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAddon::execMulticast_AddAddonToItem)
	{
		P_GET_OBJECT(ACollectable,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddAddonToItem_Implementation(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAddon::execMulticast_SetBaseItem)
	{
		P_GET_OBJECT(ACollectable,Z_Param_baseItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_SetBaseItem_Validate(Z_Param_baseItem))
		{
			RPC_ValidateFailed(TEXT("Multicast_SetBaseItem_Validate"));
			return;
		}
		P_THIS->Multicast_SetBaseItem_Implementation(Z_Param_baseItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAddon::execOnRep_AddonInitializationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AddonInitializationData();
		P_NATIVE_END;
	}
	static FName NAME_UItemAddon_Authority_OnCollectableDropped = FName(TEXT("Authority_OnCollectableDropped"));
	void UItemAddon::Authority_OnCollectableDropped(ADBDPlayer* player)
	{
		ItemAddon_eventAuthority_OnCollectableDropped_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UItemAddon_Authority_OnCollectableDropped),&Parms);
	}
	static FName NAME_UItemAddon_Authority_OnCollectablePickedUp = FName(TEXT("Authority_OnCollectablePickedUp"));
	void UItemAddon::Authority_OnCollectablePickedUp(ADBDPlayer* player)
	{
		ItemAddon_eventAuthority_OnCollectablePickedUp_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UItemAddon_Authority_OnCollectablePickedUp),&Parms);
	}
	static FName NAME_UItemAddon_DebugPrintStats = FName(TEXT("DebugPrintStats"));
	void UItemAddon::DebugPrintStats()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemAddon_DebugPrintStats),NULL);
	}
	static FName NAME_UItemAddon_IsReadyForSetUp = FName(TEXT("IsReadyForSetUp"));
	bool UItemAddon::IsReadyForSetUp() const
	{
		ItemAddon_eventIsReadyForSetUp_Parms Parms;
		const_cast<UItemAddon*>(this)->ProcessEvent(FindFunctionChecked(NAME_UItemAddon_IsReadyForSetUp),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UItemAddon_Multicast_AddAddonToItem = FName(TEXT("Multicast_AddAddonToItem"));
	void UItemAddon::Multicast_AddAddonToItem(ACollectable* item)
	{
		ItemAddon_eventMulticast_AddAddonToItem_Parms Parms;
		Parms.item=item;
		ProcessEvent(FindFunctionChecked(NAME_UItemAddon_Multicast_AddAddonToItem),&Parms);
	}
	static FName NAME_UItemAddon_Multicast_SetBaseItem = FName(TEXT("Multicast_SetBaseItem"));
	void UItemAddon::Multicast_SetBaseItem(ACollectable* baseItem)
	{
		ItemAddon_eventMulticast_SetBaseItem_Parms Parms;
		Parms.baseItem=baseItem;
		ProcessEvent(FindFunctionChecked(NAME_UItemAddon_Multicast_SetBaseItem),&Parms);
	}
	static FName NAME_UItemAddon_OnPostItemAddonsCreation = FName(TEXT("OnPostItemAddonsCreation"));
	void UItemAddon::OnPostItemAddonsCreation(ADBDPlayer* player, ACollectable* item)
	{
		ItemAddon_eventOnPostItemAddonsCreation_Parms Parms;
		Parms.player=player;
		Parms.item=item;
		ProcessEvent(FindFunctionChecked(NAME_UItemAddon_OnPostItemAddonsCreation),&Parms);
	}
	static FName NAME_UItemAddon_SetUpAddon = FName(TEXT("SetUpAddon"));
	void UItemAddon::SetUpAddon()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemAddon_SetUpAddon),NULL);
	}
	void UItemAddon::StaticRegisterNativesUItemAddon()
	{
		UClass* Class = UItemAddon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ApplyMetaModifiers", &UItemAddon::execAuthority_ApplyMetaModifiers },
			{ "Authority_OnCollectablePickedUp", &UItemAddon::execAuthority_OnCollectablePickedUp },
			{ "IsReadyForSetUp", &UItemAddon::execIsReadyForSetUp },
			{ "IsSecondaryAction", &UItemAddon::execIsSecondaryAction },
			{ "Multicast_AddAddonToItem", &UItemAddon::execMulticast_AddAddonToItem },
			{ "Multicast_SetBaseItem", &UItemAddon::execMulticast_SetBaseItem },
			{ "OnRep_AddonInitializationData", &UItemAddon::execOnRep_AddonInitializationData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "Authority_ApplyMetaModifiers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemAddon_eventAuthority_OnCollectableDropped_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "Authority_OnCollectableDropped", nullptr, nullptr, sizeof(ItemAddon_eventAuthority_OnCollectableDropped_Parms), Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemAddon_eventAuthority_OnCollectablePickedUp_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "Authority_OnCollectablePickedUp", nullptr, nullptr, sizeof(ItemAddon_eventAuthority_OnCollectablePickedUp_Parms), Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_DebugPrintStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_DebugPrintStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_DebugPrintStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "DebugPrintStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_DebugPrintStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_DebugPrintStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_DebugPrintStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_DebugPrintStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemAddon_eventIsReadyForSetUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemAddon_eventIsReadyForSetUp_Parms), &Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "IsReadyForSetUp", nullptr, nullptr, sizeof(ItemAddon_eventIsReadyForSetUp_Parms), Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_IsReadyForSetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_IsReadyForSetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics
	{
		struct ItemAddon_eventIsSecondaryAction_Parms
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
	void Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemAddon_eventIsSecondaryAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemAddon_eventIsSecondaryAction_Parms), &Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "IsSecondaryAction", nullptr, nullptr, sizeof(ItemAddon_eventIsSecondaryAction_Parms), Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_IsSecondaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_IsSecondaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemAddon_eventMulticast_AddAddonToItem_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "Multicast_AddAddonToItem", nullptr, nullptr, sizeof(ItemAddon_eventMulticast_AddAddonToItem_Parms), Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::NewProp_baseItem = { "baseItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemAddon_eventMulticast_SetBaseItem_Parms, baseItem), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::NewProp_baseItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "Multicast_SetBaseItem", nullptr, nullptr, sizeof(ItemAddon_eventMulticast_SetBaseItem_Parms), Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemAddon_eventOnPostItemAddonsCreation_Parms, item), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemAddon_eventOnPostItemAddonsCreation_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "OnPostItemAddonsCreation", nullptr, nullptr, sizeof(ItemAddon_eventOnPostItemAddonsCreation_Parms), Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "OnRep_AddonInitializationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAddon_SetUpAddon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAddon_SetUpAddon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAddon_SetUpAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAddon, nullptr, "SetUpAddon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemAddon_SetUpAddon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAddon_SetUpAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemAddon_SetUpAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemAddon_SetUpAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemAddon_NoRegister()
	{
		return UItemAddon::StaticClass();
	}
	struct Z_Construct_UClass_UItemAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonInitializationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__addonInitializationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__needsSetup_MetaData[];
#endif
		static void NewProp__needsSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__needsSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BaseItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemAddon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemAddon_Authority_ApplyMetaModifiers, "Authority_ApplyMetaModifiers" }, // 2231467413
		{ &Z_Construct_UFunction_UItemAddon_Authority_OnCollectableDropped, "Authority_OnCollectableDropped" }, // 1473259075
		{ &Z_Construct_UFunction_UItemAddon_Authority_OnCollectablePickedUp, "Authority_OnCollectablePickedUp" }, // 3546381888
		{ &Z_Construct_UFunction_UItemAddon_DebugPrintStats, "DebugPrintStats" }, // 1036245336
		{ &Z_Construct_UFunction_UItemAddon_IsReadyForSetUp, "IsReadyForSetUp" }, // 2736188520
		{ &Z_Construct_UFunction_UItemAddon_IsSecondaryAction, "IsSecondaryAction" }, // 4167558708
		{ &Z_Construct_UFunction_UItemAddon_Multicast_AddAddonToItem, "Multicast_AddAddonToItem" }, // 4185029865
		{ &Z_Construct_UFunction_UItemAddon_Multicast_SetBaseItem, "Multicast_SetBaseItem" }, // 2069513088
		{ &Z_Construct_UFunction_UItemAddon_OnPostItemAddonsCreation, "OnPostItemAddonsCreation" }, // 3168923078
		{ &Z_Construct_UFunction_UItemAddon_OnRep_AddonInitializationData, "OnRep_AddonInitializationData" }, // 1383203305
		{ &Z_Construct_UFunction_UItemAddon_SetUpAddon, "SetUpAddon" }, // 4277419486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemAddon.h" },
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAddon_Statics::NewProp__addonInitializationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemAddon_Statics::NewProp__addonInitializationData = { "_addonInitializationData", "OnRep_AddonInitializationData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemAddon, _addonInitializationData), Z_Construct_UScriptStruct_FItemAddonInitializationData, METADATA_PARAMS(Z_Construct_UClass_UItemAddon_Statics::NewProp__addonInitializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemAddon_Statics::NewProp__addonInitializationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAddon_Statics::NewProp__needsSetup_MetaData[] = {
		{ "Category", "ItemAddon" },
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	void Z_Construct_UClass_UItemAddon_Statics::NewProp__needsSetup_SetBit(void* Obj)
	{
		((UItemAddon*)Obj)->_needsSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemAddon_Statics::NewProp__needsSetup = { "_needsSetup", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UItemAddon), &Z_Construct_UClass_UItemAddon_Statics::NewProp__needsSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItemAddon_Statics::NewProp__needsSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemAddon_Statics::NewProp__needsSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAddon_Statics::NewProp_BaseItemType_MetaData[] = {
		{ "Category", "ItemAddon" },
		{ "ModuleRelativePath", "Public/ItemAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemAddon_Statics::NewProp_BaseItemType = { "BaseItemType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemAddon, BaseItemType), Z_Construct_UClass_ACollectable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemAddon_Statics::NewProp_BaseItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemAddon_Statics::NewProp_BaseItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemAddon_Statics::NewProp__addonInitializationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemAddon_Statics::NewProp__needsSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemAddon_Statics::NewProp_BaseItemType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemAddon_Statics::ClassParams = {
		&UItemAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemAddon_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemAddon, 3080399236);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UItemAddon>()
	{
		return UItemAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemAddon(Z_Construct_UClass_UItemAddon, &UItemAddon::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UItemAddon"), false, nullptr, nullptr, nullptr);

	void UItemAddon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__addonInitializationData(TEXT("_addonInitializationData"));

		const bool bIsValid = true
			&& Name__addonInitializationData == ClassReps[(int32)ENetFields_Private::_addonInitializationData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UItemAddon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
