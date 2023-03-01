// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PanelScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanelScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPanelScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPanelScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UPanelScreen::execOnAvailableItemClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_clickedItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvailableItemClicked(Z_Param_clickedItemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnAvailableItemsSortingChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newSorting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvailableItemsSortingChange(Z_Param_newSorting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnCharacterSlotButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterSlotButtonClick(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnCharInfoClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharInfoClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnConfirmCollectSelectedNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmCollectSelectedNode(Z_Param_characterId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnCrowdChoiceCharacterClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCrowdChoiceCharacterClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnEquipableSlotClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_clickedSlotCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_clickedSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipableSlotClicked(Z_Param_clickedSlotCategory,Z_Param_clickedSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnItemSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemSelected(Z_Param_itemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnItemUnselected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemUnselected(Z_Param_itemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnLoadoutSlotButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutSlotButtonClick(Z_Param_slotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnPanelsHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPanelsHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnPrestigeUp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrestigeUp(Z_Param_characterId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnRegenerateButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRegenerateButtonClick(Z_Param_characterId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnReservedBloodPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_GET_PROPERTY(FIntProperty,Z_Param_bloodPoints);
		P_GET_UBOOL(Z_Param_fullCost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReservedBloodPoints(Z_Param_characterId,Z_Param_bloodPoints,Z_Param_fullCost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnRoleButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRoleButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnRotateCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mouseDistanceChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotateCharacter(Z_Param_mouseDistanceChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnSelectedEquipableSlotZoomChange)
	{
		P_GET_UBOOL(Z_Param_zoomIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectedEquipableSlotZoomChange(Z_Param_zoomIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnSideTabButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSideTabButtonClick(Z_Param_tabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnStoreButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoreButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnWebBuilt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWebBuilt(Z_Param_characterId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPanelScreen::execOnWebNodeSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_PROPERTY(FIntProperty,Z_Param_nodeDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWebNodeSelected(Z_Param_characterId,Z_Param_id,Z_Param_nodeDepth);
		P_NATIVE_END;
	}
	void UPanelScreen::StaticRegisterNativesUPanelScreen()
	{
		UClass* Class = UPanelScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAvailableItemClicked", &UPanelScreen::execOnAvailableItemClicked },
			{ "OnAvailableItemsSortingChange", &UPanelScreen::execOnAvailableItemsSortingChange },
			{ "OnCharacterSlotButtonClick", &UPanelScreen::execOnCharacterSlotButtonClick },
			{ "OnCharInfoClick", &UPanelScreen::execOnCharInfoClick },
			{ "OnConfirmCollectSelectedNode", &UPanelScreen::execOnConfirmCollectSelectedNode },
			{ "OnCrowdChoiceCharacterClick", &UPanelScreen::execOnCrowdChoiceCharacterClick },
			{ "OnEquipableSlotClicked", &UPanelScreen::execOnEquipableSlotClicked },
			{ "OnItemSelected", &UPanelScreen::execOnItemSelected },
			{ "OnItemUnselected", &UPanelScreen::execOnItemUnselected },
			{ "OnLoadoutSlotButtonClick", &UPanelScreen::execOnLoadoutSlotButtonClick },
			{ "OnPanelsHidden", &UPanelScreen::execOnPanelsHidden },
			{ "OnPrestigeUp", &UPanelScreen::execOnPrestigeUp },
			{ "OnRegenerateButtonClick", &UPanelScreen::execOnRegenerateButtonClick },
			{ "OnReservedBloodPoints", &UPanelScreen::execOnReservedBloodPoints },
			{ "OnRoleButtonClick", &UPanelScreen::execOnRoleButtonClick },
			{ "OnRotateCharacter", &UPanelScreen::execOnRotateCharacter },
			{ "OnSelectedEquipableSlotZoomChange", &UPanelScreen::execOnSelectedEquipableSlotZoomChange },
			{ "OnSideTabButtonClick", &UPanelScreen::execOnSideTabButtonClick },
			{ "OnStoreButtonClick", &UPanelScreen::execOnStoreButtonClick },
			{ "OnWebBuilt", &UPanelScreen::execOnWebBuilt },
			{ "OnWebNodeSelected", &UPanelScreen::execOnWebNodeSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics
	{
		struct PanelScreen_eventOnAvailableItemClicked_Parms
		{
			int32 clickedItemIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_clickedItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::NewProp_clickedItemIndex = { "clickedItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnAvailableItemClicked_Parms, clickedItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::NewProp_clickedItemIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnAvailableItemClicked", nullptr, nullptr, sizeof(PanelScreen_eventOnAvailableItemClicked_Parms), Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics
	{
		struct PanelScreen_eventOnAvailableItemsSortingChange_Parms
		{
			int32 newSorting;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newSorting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::NewProp_newSorting = { "newSorting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnAvailableItemsSortingChange_Parms, newSorting), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::NewProp_newSorting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnAvailableItemsSortingChange", nullptr, nullptr, sizeof(PanelScreen_eventOnAvailableItemsSortingChange_Parms), Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics
	{
		struct PanelScreen_eventOnCharacterSlotButtonClick_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnCharacterSlotButtonClick_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnCharacterSlotButtonClick", nullptr, nullptr, sizeof(PanelScreen_eventOnCharacterSlotButtonClick_Parms), Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnCharInfoClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnCharInfoClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnCharInfoClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnCharInfoClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnCharInfoClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnCharInfoClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnCharInfoClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnCharInfoClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics
	{
		struct PanelScreen_eventOnConfirmCollectSelectedNode_Parms
		{
			int32 characterId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnConfirmCollectSelectedNode_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::NewProp_characterId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnConfirmCollectSelectedNode", nullptr, nullptr, sizeof(PanelScreen_eventOnConfirmCollectSelectedNode_Parms), Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnCrowdChoiceCharacterClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics
	{
		struct PanelScreen_eventOnEquipableSlotClicked_Parms
		{
			int32 clickedSlotCategory;
			int32 clickedSlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_clickedSlotIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_clickedSlotCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::NewProp_clickedSlotIndex = { "clickedSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnEquipableSlotClicked_Parms, clickedSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::NewProp_clickedSlotCategory = { "clickedSlotCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnEquipableSlotClicked_Parms, clickedSlotCategory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::NewProp_clickedSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::NewProp_clickedSlotCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnEquipableSlotClicked", nullptr, nullptr, sizeof(PanelScreen_eventOnEquipableSlotClicked_Parms), Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics
	{
		struct PanelScreen_eventOnItemSelected_Parms
		{
			int32 itemIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnItemSelected_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::NewProp_itemIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnItemSelected", nullptr, nullptr, sizeof(PanelScreen_eventOnItemSelected_Parms), Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnItemSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnItemSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics
	{
		struct PanelScreen_eventOnItemUnselected_Parms
		{
			int32 itemIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnItemUnselected_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::NewProp_itemIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnItemUnselected", nullptr, nullptr, sizeof(PanelScreen_eventOnItemUnselected_Parms), Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnItemUnselected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnItemUnselected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics
	{
		struct PanelScreen_eventOnLoadoutSlotButtonClick_Parms
		{
			int32 slotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnLoadoutSlotButtonClick_Parms, slotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnLoadoutSlotButtonClick", nullptr, nullptr, sizeof(PanelScreen_eventOnLoadoutSlotButtonClick_Parms), Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnPanelsHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnPanelsHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnPanelsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnPanelsHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnPanelsHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnPanelsHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnPanelsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnPanelsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics
	{
		struct PanelScreen_eventOnPrestigeUp_Parms
		{
			int32 characterId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnPrestigeUp_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::NewProp_characterId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnPrestigeUp", nullptr, nullptr, sizeof(PanelScreen_eventOnPrestigeUp_Parms), Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnPrestigeUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnPrestigeUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics
	{
		struct PanelScreen_eventOnRegenerateButtonClick_Parms
		{
			int32 characterId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnRegenerateButtonClick_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::NewProp_characterId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnRegenerateButtonClick", nullptr, nullptr, sizeof(PanelScreen_eventOnRegenerateButtonClick_Parms), Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics
	{
		struct PanelScreen_eventOnReservedBloodPoints_Parms
		{
			int32 characterId;
			int32 bloodPoints;
			bool fullCost;
		};
		static void NewProp_fullCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fullCost;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bloodPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_fullCost_SetBit(void* Obj)
	{
		((PanelScreen_eventOnReservedBloodPoints_Parms*)Obj)->fullCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_fullCost = { "fullCost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PanelScreen_eventOnReservedBloodPoints_Parms), &Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_fullCost_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_bloodPoints = { "bloodPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnReservedBloodPoints_Parms, bloodPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnReservedBloodPoints_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_fullCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_bloodPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::NewProp_characterId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnReservedBloodPoints", nullptr, nullptr, sizeof(PanelScreen_eventOnReservedBloodPoints_Parms), Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnRoleButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics
	{
		struct PanelScreen_eventOnRotateCharacter_Parms
		{
			float mouseDistanceChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mouseDistanceChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::NewProp_mouseDistanceChange = { "mouseDistanceChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnRotateCharacter_Parms, mouseDistanceChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::NewProp_mouseDistanceChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnRotateCharacter", nullptr, nullptr, sizeof(PanelScreen_eventOnRotateCharacter_Parms), Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnRotateCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnRotateCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics
	{
		struct PanelScreen_eventOnSelectedEquipableSlotZoomChange_Parms
		{
			bool zoomIn;
		};
		static void NewProp_zoomIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_zoomIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::NewProp_zoomIn_SetBit(void* Obj)
	{
		((PanelScreen_eventOnSelectedEquipableSlotZoomChange_Parms*)Obj)->zoomIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::NewProp_zoomIn = { "zoomIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PanelScreen_eventOnSelectedEquipableSlotZoomChange_Parms), &Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::NewProp_zoomIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::NewProp_zoomIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnSelectedEquipableSlotZoomChange", nullptr, nullptr, sizeof(PanelScreen_eventOnSelectedEquipableSlotZoomChange_Parms), Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics
	{
		struct PanelScreen_eventOnSideTabButtonClick_Parms
		{
			int32 tabIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnSideTabButtonClick_Parms, tabIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnSideTabButtonClick", nullptr, nullptr, sizeof(PanelScreen_eventOnSideTabButtonClick_Parms), Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnStoreButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics
	{
		struct PanelScreen_eventOnWebBuilt_Parms
		{
			int32 characterId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnWebBuilt_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::NewProp_characterId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnWebBuilt", nullptr, nullptr, sizeof(PanelScreen_eventOnWebBuilt_Parms), Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnWebBuilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnWebBuilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics
	{
		struct PanelScreen_eventOnWebNodeSelected_Parms
		{
			int32 characterId;
			int32 id;
			int32 nodeDepth;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_nodeDepth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::NewProp_nodeDepth = { "nodeDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnWebNodeSelected_Parms, nodeDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnWebNodeSelected_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PanelScreen_eventOnWebNodeSelected_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::NewProp_nodeDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::NewProp_characterId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPanelScreen, nullptr, "OnWebNodeSelected", nullptr, nullptr, sizeof(PanelScreen_eventOnWebNodeSelected_Parms), Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPanelScreen_NoRegister()
	{
		return UPanelScreen::StaticClass();
	}
	struct Z_Construct_UClass_UPanelScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPanelScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPanelScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPanelScreen_OnAvailableItemClicked, "OnAvailableItemClicked" }, // 1690339166
		{ &Z_Construct_UFunction_UPanelScreen_OnAvailableItemsSortingChange, "OnAvailableItemsSortingChange" }, // 865207784
		{ &Z_Construct_UFunction_UPanelScreen_OnCharacterSlotButtonClick, "OnCharacterSlotButtonClick" }, // 1760008903
		{ &Z_Construct_UFunction_UPanelScreen_OnCharInfoClick, "OnCharInfoClick" }, // 3704868955
		{ &Z_Construct_UFunction_UPanelScreen_OnConfirmCollectSelectedNode, "OnConfirmCollectSelectedNode" }, // 1830007705
		{ &Z_Construct_UFunction_UPanelScreen_OnCrowdChoiceCharacterClick, "OnCrowdChoiceCharacterClick" }, // 3388724164
		{ &Z_Construct_UFunction_UPanelScreen_OnEquipableSlotClicked, "OnEquipableSlotClicked" }, // 2256688323
		{ &Z_Construct_UFunction_UPanelScreen_OnItemSelected, "OnItemSelected" }, // 3006397329
		{ &Z_Construct_UFunction_UPanelScreen_OnItemUnselected, "OnItemUnselected" }, // 539955520
		{ &Z_Construct_UFunction_UPanelScreen_OnLoadoutSlotButtonClick, "OnLoadoutSlotButtonClick" }, // 270389756
		{ &Z_Construct_UFunction_UPanelScreen_OnPanelsHidden, "OnPanelsHidden" }, // 1173831389
		{ &Z_Construct_UFunction_UPanelScreen_OnPrestigeUp, "OnPrestigeUp" }, // 623002489
		{ &Z_Construct_UFunction_UPanelScreen_OnRegenerateButtonClick, "OnRegenerateButtonClick" }, // 3366453212
		{ &Z_Construct_UFunction_UPanelScreen_OnReservedBloodPoints, "OnReservedBloodPoints" }, // 716476990
		{ &Z_Construct_UFunction_UPanelScreen_OnRoleButtonClick, "OnRoleButtonClick" }, // 1420578174
		{ &Z_Construct_UFunction_UPanelScreen_OnRotateCharacter, "OnRotateCharacter" }, // 3938937618
		{ &Z_Construct_UFunction_UPanelScreen_OnSelectedEquipableSlotZoomChange, "OnSelectedEquipableSlotZoomChange" }, // 3467460562
		{ &Z_Construct_UFunction_UPanelScreen_OnSideTabButtonClick, "OnSideTabButtonClick" }, // 706608658
		{ &Z_Construct_UFunction_UPanelScreen_OnStoreButtonClick, "OnStoreButtonClick" }, // 1736507730
		{ &Z_Construct_UFunction_UPanelScreen_OnWebBuilt, "OnWebBuilt" }, // 1608044712
		{ &Z_Construct_UFunction_UPanelScreen_OnWebNodeSelected, "OnWebNodeSelected" }, // 3409907500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PanelScreen.h" },
		{ "ModuleRelativePath", "Public/PanelScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPanelScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanelScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPanelScreen_Statics::ClassParams = {
		&UPanelScreen::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPanelScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPanelScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPanelScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPanelScreen, 931981850);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPanelScreen>()
	{
		return UPanelScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPanelScreen(Z_Construct_UClass_UPanelScreen, &UPanelScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPanelScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPanelScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
