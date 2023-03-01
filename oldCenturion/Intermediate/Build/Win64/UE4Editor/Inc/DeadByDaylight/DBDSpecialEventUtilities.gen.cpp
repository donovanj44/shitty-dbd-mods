// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDSpecialEventUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDSpecialEventUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDSpecialEventUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDSpecialEventUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDSpecialEventUtilities::execDoesPlayerHasEventOffering)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_ENUM(EOfferingEffectType,Z_Param_offeringEffectType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDSpecialEventUtilities::DoesPlayerHasEventOffering(Z_Param_player,EOfferingEffectType(Z_Param_offeringEffectType));
		P_NATIVE_END;
	}
	void UDBDSpecialEventUtilities::StaticRegisterNativesUDBDSpecialEventUtilities()
	{
		UClass* Class = UDBDSpecialEventUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesPlayerHasEventOffering", &UDBDSpecialEventUtilities::execDoesPlayerHasEventOffering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics
	{
		struct DBDSpecialEventUtilities_eventDoesPlayerHasEventOffering_Parms
		{
			ADBDPlayer* player;
			EOfferingEffectType offeringEffectType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_offeringEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_offeringEffectType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDSpecialEventUtilities_eventDoesPlayerHasEventOffering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDSpecialEventUtilities_eventDoesPlayerHasEventOffering_Parms), &Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_offeringEffectType = { "offeringEffectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSpecialEventUtilities_eventDoesPlayerHasEventOffering_Parms, offeringEffectType), Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_offeringEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSpecialEventUtilities_eventDoesPlayerHasEventOffering_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_offeringEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_offeringEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSpecialEventUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDSpecialEventUtilities, nullptr, "DoesPlayerHasEventOffering", nullptr, nullptr, sizeof(DBDSpecialEventUtilities_eventDoesPlayerHasEventOffering_Parms), Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDSpecialEventUtilities_NoRegister()
	{
		return UDBDSpecialEventUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDSpecialEventUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDSpecialEventUtilities_DoesPlayerHasEventOffering, "DoesPlayerHasEventOffering" }, // 3886386963
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDSpecialEventUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDSpecialEventUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDSpecialEventUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::ClassParams = {
		&UDBDSpecialEventUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDSpecialEventUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDSpecialEventUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDSpecialEventUtilities, 230017879);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDSpecialEventUtilities>()
	{
		return UDBDSpecialEventUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDSpecialEventUtilities(Z_Construct_UClass_UDBDSpecialEventUtilities, &UDBDSpecialEventUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDSpecialEventUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDSpecialEventUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
