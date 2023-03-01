// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/GunslingerUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunslingerUtilities() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerUtilities_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonRifle_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGunslingerUtilities::execGetHarpoonRifle)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHarpoonRifle**)Z_Param__Result=UGunslingerUtilities::GetHarpoonRifle(Z_Param_player);
		P_NATIVE_END;
	}
	void UGunslingerUtilities::StaticRegisterNativesUGunslingerUtilities()
	{
		UClass* Class = UGunslingerUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHarpoonRifle", &UGunslingerUtilities::execGetHarpoonRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics
	{
		struct GunslingerUtilities_eventGetHarpoonRifle_Parms
		{
			ADBDPlayer* player;
			AHarpoonRifle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunslingerUtilities_eventGetHarpoonRifle_Parms, ReturnValue), Z_Construct_UClass_AHarpoonRifle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunslingerUtilities_eventGetHarpoonRifle_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GunslingerUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGunslingerUtilities, nullptr, "GetHarpoonRifle", nullptr, nullptr, sizeof(GunslingerUtilities_eventGetHarpoonRifle_Parms), Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGunslingerUtilities_NoRegister()
	{
		return UGunslingerUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UGunslingerUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGunslingerUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGunslingerUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGunslingerUtilities_GetHarpoonRifle, "GetHarpoonRifle" }, // 532244280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GunslingerUtilities.h" },
		{ "ModuleRelativePath", "Public/GunslingerUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGunslingerUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGunslingerUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGunslingerUtilities_Statics::ClassParams = {
		&UGunslingerUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGunslingerUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGunslingerUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGunslingerUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGunslingerUtilities, 1177583786);
	template<> THEGUNSLINGER_API UClass* StaticClass<UGunslingerUtilities>()
	{
		return UGunslingerUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGunslingerUtilities(Z_Construct_UClass_UGunslingerUtilities, &UGunslingerUtilities::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UGunslingerUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGunslingerUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
