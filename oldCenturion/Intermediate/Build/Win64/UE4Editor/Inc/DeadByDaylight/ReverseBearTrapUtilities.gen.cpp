// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ReverseBearTrapUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseBearTrapUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UReverseBearTrapUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UReverseBearTrapUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AReverseBearTrap_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReverseBearTrapUtilities::execGetAttachedRBT)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AReverseBearTrap**)Z_Param__Result=UReverseBearTrapUtilities::GetAttachedRBT(Z_Param_player);
		P_NATIVE_END;
	}
	void UReverseBearTrapUtilities::StaticRegisterNativesUReverseBearTrapUtilities()
	{
		UClass* Class = UReverseBearTrapUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedRBT", &UReverseBearTrapUtilities::execGetAttachedRBT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics
	{
		struct ReverseBearTrapUtilities_eventGetAttachedRBT_Parms
		{
			ADBDPlayer* player;
			AReverseBearTrap* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapUtilities_eventGetAttachedRBT_Parms, ReturnValue), Z_Construct_UClass_AReverseBearTrap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReverseBearTrapUtilities_eventGetAttachedRBT_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReverseBearTrapUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReverseBearTrapUtilities, nullptr, "GetAttachedRBT", nullptr, nullptr, sizeof(ReverseBearTrapUtilities_eventGetAttachedRBT_Parms), Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReverseBearTrapUtilities_NoRegister()
	{
		return UReverseBearTrapUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UReverseBearTrapUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverseBearTrapUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReverseBearTrapUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReverseBearTrapUtilities_GetAttachedRBT, "GetAttachedRBT" }, // 1033394980
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverseBearTrapUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReverseBearTrapUtilities.h" },
		{ "ModuleRelativePath", "Public/ReverseBearTrapUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverseBearTrapUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverseBearTrapUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReverseBearTrapUtilities_Statics::ClassParams = {
		&UReverseBearTrapUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReverseBearTrapUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReverseBearTrapUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverseBearTrapUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReverseBearTrapUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReverseBearTrapUtilities, 2710427556);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UReverseBearTrapUtilities>()
	{
		return UReverseBearTrapUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReverseBearTrapUtilities(Z_Construct_UClass_UReverseBearTrapUtilities, &UReverseBearTrapUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UReverseBearTrapUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverseBearTrapUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
