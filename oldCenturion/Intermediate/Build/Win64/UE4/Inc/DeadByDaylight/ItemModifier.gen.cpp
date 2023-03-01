// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemModifier() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemModifier_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemModifier();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierData();
// End Cross Module References
	DEFINE_FUNCTION(UItemModifier::execAuthoritySetItemCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthoritySetItemCount(Z_Param_itemCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execAuthoritySetItemEnergy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_energy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthoritySetItemEnergy(Z_Param_energy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execAuthoritySetItemMaxEnergy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_energy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthoritySetItemMaxEnergy(Z_Param_energy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execGetBaseItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACollectable**)Z_Param__Result=P_THIS->GetBaseItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execGetItemCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execGetItemEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execGetItemMaxEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemMaxEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execHandleIncreaseCharge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleIncreaseCharge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execHandleIncreaseItemCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleIncreaseItemCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execHandleIncreaseMaxCharge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleIncreaseMaxCharge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemModifier::execOnRep_ModifierData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ModifierData();
		P_NATIVE_END;
	}
	void UItemModifier::StaticRegisterNativesUItemModifier()
	{
		UClass* Class = UItemModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthoritySetItemCount", &UItemModifier::execAuthoritySetItemCount },
			{ "AuthoritySetItemEnergy", &UItemModifier::execAuthoritySetItemEnergy },
			{ "AuthoritySetItemMaxEnergy", &UItemModifier::execAuthoritySetItemMaxEnergy },
			{ "GetBaseItem", &UItemModifier::execGetBaseItem },
			{ "GetItemCount", &UItemModifier::execGetItemCount },
			{ "GetItemEnergy", &UItemModifier::execGetItemEnergy },
			{ "GetItemMaxEnergy", &UItemModifier::execGetItemMaxEnergy },
			{ "HandleIncreaseCharge", &UItemModifier::execHandleIncreaseCharge },
			{ "HandleIncreaseItemCount", &UItemModifier::execHandleIncreaseItemCount },
			{ "HandleIncreaseMaxCharge", &UItemModifier::execHandleIncreaseMaxCharge },
			{ "OnRep_ModifierData", &UItemModifier::execOnRep_ModifierData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics
	{
		struct ItemModifier_eventAuthoritySetItemCount_Parms
		{
			int32 itemCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::NewProp_itemCount = { "itemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemModifier_eventAuthoritySetItemCount_Parms, itemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::NewProp_itemCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "AuthoritySetItemCount", nullptr, nullptr, sizeof(ItemModifier_eventAuthoritySetItemCount_Parms), Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics
	{
		struct ItemModifier_eventAuthoritySetItemEnergy_Parms
		{
			float energy;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::NewProp_energy = { "energy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemModifier_eventAuthoritySetItemEnergy_Parms, energy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::NewProp_energy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "AuthoritySetItemEnergy", nullptr, nullptr, sizeof(ItemModifier_eventAuthoritySetItemEnergy_Parms), Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics
	{
		struct ItemModifier_eventAuthoritySetItemMaxEnergy_Parms
		{
			float energy;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::NewProp_energy = { "energy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemModifier_eventAuthoritySetItemMaxEnergy_Parms, energy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::NewProp_energy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "AuthoritySetItemMaxEnergy", nullptr, nullptr, sizeof(ItemModifier_eventAuthoritySetItemMaxEnergy_Parms), Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics
	{
		struct ItemModifier_eventGetBaseItem_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemModifier_eventGetBaseItem_Parms, ReturnValue), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "GetBaseItem", nullptr, nullptr, sizeof(ItemModifier_eventGetBaseItem_Parms), Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_GetBaseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_GetBaseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_GetItemCount_Statics
	{
		struct ItemModifier_eventGetItemCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemModifier_eventGetItemCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "GetItemCount", nullptr, nullptr, sizeof(ItemModifier_eventGetItemCount_Parms), Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_GetItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_GetItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics
	{
		struct ItemModifier_eventGetItemEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemModifier_eventGetItemEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "GetItemEnergy", nullptr, nullptr, sizeof(ItemModifier_eventGetItemEnergy_Parms), Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_GetItemEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_GetItemEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics
	{
		struct ItemModifier_eventGetItemMaxEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemModifier_eventGetItemMaxEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "GetItemMaxEnergy", nullptr, nullptr, sizeof(ItemModifier_eventGetItemMaxEnergy_Parms), Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "HandleIncreaseCharge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "HandleIncreaseItemCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "HandleIncreaseMaxCharge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemModifier_OnRep_ModifierData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemModifier_OnRep_ModifierData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModifier_OnRep_ModifierData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModifier, nullptr, "OnRep_ModifierData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemModifier_OnRep_ModifierData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModifier_OnRep_ModifierData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemModifier_OnRep_ModifierData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemModifier_OnRep_ModifierData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemModifier_NoRegister()
	{
		return UItemModifier::StaticClass();
	}
	struct Z_Construct_UClass_UItemModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifierData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemModifier_AuthoritySetItemCount, "AuthoritySetItemCount" }, // 1076815788
		{ &Z_Construct_UFunction_UItemModifier_AuthoritySetItemEnergy, "AuthoritySetItemEnergy" }, // 2180269017
		{ &Z_Construct_UFunction_UItemModifier_AuthoritySetItemMaxEnergy, "AuthoritySetItemMaxEnergy" }, // 613235593
		{ &Z_Construct_UFunction_UItemModifier_GetBaseItem, "GetBaseItem" }, // 4114704067
		{ &Z_Construct_UFunction_UItemModifier_GetItemCount, "GetItemCount" }, // 2087516539
		{ &Z_Construct_UFunction_UItemModifier_GetItemEnergy, "GetItemEnergy" }, // 177171487
		{ &Z_Construct_UFunction_UItemModifier_GetItemMaxEnergy, "GetItemMaxEnergy" }, // 3656010506
		{ &Z_Construct_UFunction_UItemModifier_HandleIncreaseCharge, "HandleIncreaseCharge" }, // 2545863227
		{ &Z_Construct_UFunction_UItemModifier_HandleIncreaseItemCount, "HandleIncreaseItemCount" }, // 2070958388
		{ &Z_Construct_UFunction_UItemModifier_HandleIncreaseMaxCharge, "HandleIncreaseMaxCharge" }, // 3860835165
		{ &Z_Construct_UFunction_UItemModifier_OnRep_ModifierData, "OnRep_ModifierData" }, // 2643170361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemModifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemModifier.h" },
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemModifier_Statics::NewProp_ModifierData_MetaData[] = {
		{ "Category", "ItemModifier" },
		{ "ModuleRelativePath", "Public/ItemModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemModifier_Statics::NewProp_ModifierData = { "ModifierData", "OnRep_ModifierData", (EPropertyFlags)0x0010000100000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemModifier, ModifierData), Z_Construct_UScriptStruct_FGameplayModifierData, METADATA_PARAMS(Z_Construct_UClass_UItemModifier_Statics::NewProp_ModifierData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemModifier_Statics::NewProp_ModifierData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemModifier_Statics::NewProp_ModifierData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemModifier_Statics::ClassParams = {
		&UItemModifier::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemModifier_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemModifier, 3877421557);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UItemModifier>()
	{
		return UItemModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemModifier(Z_Construct_UClass_UItemModifier, &UItemModifier::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UItemModifier"), false, nullptr, nullptr, nullptr);

	void UItemModifier::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ModifierData(TEXT("ModifierData"));

		const bool bIsValid = true
			&& Name_ModifierData == ClassReps[(int32)ENetFields_Private::ModifierData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UItemModifier"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
