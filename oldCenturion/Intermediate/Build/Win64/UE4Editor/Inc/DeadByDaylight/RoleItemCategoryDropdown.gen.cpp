// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RoleItemCategoryDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoleItemCategoryDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleItemCategoryDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDropdown();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
// End Cross Module References
class UScriptStruct* FRoleItemCategoryDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RoleItemCategoryDropdown"), sizeof(FRoleItemCategoryDropdown), Get_Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRoleItemCategoryDropdown>()
{
	return FRoleItemCategoryDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRoleItemCategoryDropdown(FRoleItemCategoryDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RoleItemCategoryDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleItemCategoryDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleItemCategoryDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RoleItemCategoryDropdown")),new UScriptStruct::TCppStructOps<FRoleItemCategoryDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleItemCategoryDropdown;
	struct Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeNone_MetaData[];
#endif
		static void NewProp_IncludeNone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeNone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeOutfits_MetaData[];
#endif
		static void NewProp_IncludeOutfits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeOutfits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoleItemCategoryDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoleItemCategoryDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "RoleItemCategoryDropdown" },
		{ "ModuleRelativePath", "Public/RoleItemCategoryDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoleItemCategoryDropdown, Category), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeNone_MetaData[] = {
		{ "Category", "RoleItemCategoryDropdown" },
		{ "ModuleRelativePath", "Public/RoleItemCategoryDropdown.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeNone_SetBit(void* Obj)
	{
		((FRoleItemCategoryDropdown*)Obj)->IncludeNone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeNone = { "IncludeNone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRoleItemCategoryDropdown), &Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeNone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeNone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeNone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeOutfits_MetaData[] = {
		{ "Category", "RoleItemCategoryDropdown" },
		{ "ModuleRelativePath", "Public/RoleItemCategoryDropdown.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeOutfits_SetBit(void* Obj)
	{
		((FRoleItemCategoryDropdown*)Obj)->IncludeOutfits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeOutfits = { "IncludeOutfits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRoleItemCategoryDropdown), &Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeOutfits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeOutfits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeOutfits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeNone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::NewProp_IncludeOutfits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FCharacterDropdown,
		&NewStructOps,
		"RoleItemCategoryDropdown",
		sizeof(FRoleItemCategoryDropdown),
		alignof(FRoleItemCategoryDropdown),
		Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoleItemCategoryDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RoleItemCategoryDropdown"), sizeof(FRoleItemCategoryDropdown), Get_Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRoleItemCategoryDropdown_Hash() { return 3286780553U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
