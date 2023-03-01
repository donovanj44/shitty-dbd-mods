// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RoleDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoleDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FRoleDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRoleDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoleDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RoleDropdown"), sizeof(FRoleDropdown), Get_Z_Construct_UScriptStruct_FRoleDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRoleDropdown>()
{
	return FRoleDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRoleDropdown(FRoleDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RoleDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RoleDropdown")),new UScriptStruct::TCppStructOps<FRoleDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleDropdown;
	struct Z_Construct_UScriptStruct_FRoleDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowRoleSelection_MetaData[];
#endif
		static void NewProp_ShowRoleSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowRoleSelection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleDropdown_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoleDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoleDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "RoleDropdown" },
		{ "ModuleRelativePath", "Public/RoleDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoleDropdown, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_ShowRoleSelection_MetaData[] = {
		{ "Category", "RoleDropdown" },
		{ "ModuleRelativePath", "Public/RoleDropdown.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_ShowRoleSelection_SetBit(void* Obj)
	{
		((FRoleDropdown*)Obj)->ShowRoleSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_ShowRoleSelection = { "ShowRoleSelection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRoleDropdown), &Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_ShowRoleSelection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_ShowRoleSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_ShowRoleSelection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoleDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleDropdown_Statics::NewProp_ShowRoleSelection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoleDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"RoleDropdown",
		sizeof(FRoleDropdown),
		alignof(FRoleDropdown),
		Z_Construct_UScriptStruct_FRoleDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoleDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRoleDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RoleDropdown"), sizeof(FRoleDropdown), Get_Z_Construct_UScriptStruct_FRoleDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRoleDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRoleDropdown_Hash() { return 1499088712U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
