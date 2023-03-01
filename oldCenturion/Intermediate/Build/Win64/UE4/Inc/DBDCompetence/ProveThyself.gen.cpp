// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ProveThyself.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProveThyself() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UProveThyself_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UProveThyself();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UProveThyself::execOnSurvivorInOwnerRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorInOwnerRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void UProveThyself::StaticRegisterNativesUProveThyself()
	{
		UClass* Class = UProveThyself::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSurvivorInOwnerRangeChanged", &UProveThyself::execOnSurvivorInOwnerRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics
	{
		struct ProveThyself_eventOnSurvivorInOwnerRangeChanged_Parms
		{
			bool inRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((ProveThyself_eventOnSurvivorInOwnerRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProveThyself_eventOnSurvivorInOwnerRangeChanged_Parms), &Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProveThyself.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProveThyself, nullptr, "OnSurvivorInOwnerRangeChanged", nullptr, nullptr, sizeof(ProveThyself_eventOnSurvivorInOwnerRangeChanged_Parms), Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProveThyself_NoRegister()
	{
		return UProveThyself::StaticClass();
	}
	struct Z_Construct_UClass_UProveThyself_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__proveThyselfRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__proveThyselfRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProveThyself_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProveThyself_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProveThyself_OnSurvivorInOwnerRangeChanged, "OnSurvivorInOwnerRangeChanged" }, // 3044724760
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProveThyself_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProveThyself.h" },
		{ "ModuleRelativePath", "Public/ProveThyself.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProveThyself_Statics::NewProp__proveThyselfRange_MetaData[] = {
		{ "Category", "ProveThyself" },
		{ "ModuleRelativePath", "Public/ProveThyself.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProveThyself_Statics::NewProp__proveThyselfRange = { "_proveThyselfRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProveThyself, _proveThyselfRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UProveThyself_Statics::NewProp__proveThyselfRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProveThyself_Statics::NewProp__proveThyselfRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProveThyself_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProveThyself_Statics::NewProp__proveThyselfRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProveThyself_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProveThyself>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProveThyself_Statics::ClassParams = {
		&UProveThyself::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProveThyself_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProveThyself_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProveThyself_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProveThyself_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProveThyself()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProveThyself_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProveThyself, 2541024296);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UProveThyself>()
	{
		return UProveThyself::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProveThyself(Z_Construct_UClass_UProveThyself, &UProveThyself::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UProveThyself"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProveThyself);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
