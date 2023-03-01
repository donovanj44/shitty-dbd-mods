// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/AnySurvivorHasObjectState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnySurvivorHasObjectState() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAnySurvivorHasObjectState_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAnySurvivorHasObjectState();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UAnySurvivorHasObjectState::execOnSurvivorAdded)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorAdded(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnySurvivorHasObjectState::execOnSurvivorRemoved)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorRemoved(Z_Param_survivor);
		P_NATIVE_END;
	}
	void UAnySurvivorHasObjectState::StaticRegisterNativesUAnySurvivorHasObjectState()
	{
		UClass* Class = UAnySurvivorHasObjectState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSurvivorAdded", &UAnySurvivorHasObjectState::execOnSurvivorAdded },
			{ "OnSurvivorRemoved", &UAnySurvivorHasObjectState::execOnSurvivorRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics
	{
		struct AnySurvivorHasObjectState_eventOnSurvivorAdded_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnySurvivorHasObjectState_eventOnSurvivorAdded_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnySurvivorHasObjectState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnySurvivorHasObjectState, nullptr, "OnSurvivorAdded", nullptr, nullptr, sizeof(AnySurvivorHasObjectState_eventOnSurvivorAdded_Parms), Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics
	{
		struct AnySurvivorHasObjectState_eventOnSurvivorRemoved_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnySurvivorHasObjectState_eventOnSurvivorRemoved_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnySurvivorHasObjectState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnySurvivorHasObjectState, nullptr, "OnSurvivorRemoved", nullptr, nullptr, sizeof(AnySurvivorHasObjectState_eventOnSurvivorRemoved_Parms), Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnySurvivorHasObjectState_NoRegister()
	{
		return UAnySurvivorHasObjectState::StaticClass();
	}
	struct Z_Construct_UClass_UAnySurvivorHasObjectState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorAdded, "OnSurvivorAdded" }, // 3922415742
		{ &Z_Construct_UFunction_UAnySurvivorHasObjectState_OnSurvivorRemoved, "OnSurvivorRemoved" }, // 1367978973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnySurvivorHasObjectState.h" },
		{ "ModuleRelativePath", "Public/AnySurvivorHasObjectState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::NewProp__stateTag_MetaData[] = {
		{ "Category", "AnySurvivorHasObjectState" },
		{ "ModuleRelativePath", "Public/AnySurvivorHasObjectState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::NewProp__stateTag = { "_stateTag", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnySurvivorHasObjectState, _stateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::NewProp__stateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::NewProp__stateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::NewProp__stateTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnySurvivorHasObjectState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::ClassParams = {
		&UAnySurvivorHasObjectState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnySurvivorHasObjectState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnySurvivorHasObjectState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnySurvivorHasObjectState, 3587036699);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UAnySurvivorHasObjectState>()
	{
		return UAnySurvivorHasObjectState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnySurvivorHasObjectState(Z_Construct_UClass_UAnySurvivorHasObjectState, &UAnySurvivorHasObjectState::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UAnySurvivorHasObjectState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnySurvivorHasObjectState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
