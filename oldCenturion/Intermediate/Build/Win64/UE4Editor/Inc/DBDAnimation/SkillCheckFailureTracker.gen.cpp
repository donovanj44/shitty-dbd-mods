// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/SkillCheckFailureTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheckFailureTracker() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_USkillCheckFailureTracker_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_USkillCheckFailureTracker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(ISkillCheckFailureTracker::execOnSkillCheckFailed)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillCheckFailed(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkillCheckFailureTracker::execResetSkillCheckFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSkillCheckFailed();
		P_NATIVE_END;
	}
	void USkillCheckFailureTracker::StaticRegisterNativesUSkillCheckFailureTracker()
	{
		UClass* Class = USkillCheckFailureTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSkillCheckFailed", &ISkillCheckFailureTracker::execOnSkillCheckFailed },
			{ "ResetSkillCheckFailed", &ISkillCheckFailureTracker::execResetSkillCheckFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics
	{
		struct SkillCheckFailureTracker_eventOnSkillCheckFailed_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheckFailureTracker_eventOnSkillCheckFailed_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheckFailureTracker_eventOnSkillCheckFailed_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckFailureTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckFailureTracker, nullptr, "OnSkillCheckFailed", nullptr, nullptr, sizeof(SkillCheckFailureTracker_eventOnSkillCheckFailed_Parms), Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckFailureTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckFailureTracker, nullptr, "ResetSkillCheckFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkillCheckFailureTracker_NoRegister()
	{
		return USkillCheckFailureTracker::StaticClass();
	}
	struct Z_Construct_UClass_USkillCheckFailureTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillCheckFailureTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillCheckFailureTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillCheckFailureTracker_OnSkillCheckFailed, "OnSkillCheckFailed" }, // 504136668
		{ &Z_Construct_UFunction_USkillCheckFailureTracker_ResetSkillCheckFailed, "ResetSkillCheckFailed" }, // 623531983
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheckFailureTracker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SkillCheckFailureTracker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillCheckFailureTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISkillCheckFailureTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkillCheckFailureTracker_Statics::ClassParams = {
		&USkillCheckFailureTracker::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USkillCheckFailureTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckFailureTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillCheckFailureTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkillCheckFailureTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkillCheckFailureTracker, 3382149568);
	template<> DBDANIMATION_API UClass* StaticClass<USkillCheckFailureTracker>()
	{
		return USkillCheckFailureTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkillCheckFailureTracker(Z_Construct_UClass_USkillCheckFailureTracker, &USkillCheckFailureTracker::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("USkillCheckFailureTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillCheckFailureTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
