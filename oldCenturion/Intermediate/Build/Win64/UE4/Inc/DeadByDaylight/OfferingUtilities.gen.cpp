// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOfferingUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOfferingUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOfferingUtilities::execHasItemLossProtection)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOfferingUtilities::HasItemLossProtection(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOfferingUtilities::execHasOfferingOfType)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_ENUM(EOfferingEffectType,Z_Param_offeringEffectType);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOfferingUtilities::HasOfferingOfType(Z_Param_worldContextObject,EOfferingEffectType(Z_Param_offeringEffectType),Z_Param_playerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOfferingUtilities::execIsPlayerEquippedWithOfferingWithTag)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FNameProperty,Z_Param_offeringTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOfferingUtilities::IsPlayerEquippedWithOfferingWithTag(Z_Param_player,Z_Param_offeringTag);
		P_NATIVE_END;
	}
	void UOfferingUtilities::StaticRegisterNativesUOfferingUtilities()
	{
		UClass* Class = UOfferingUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasItemLossProtection", &UOfferingUtilities::execHasItemLossProtection },
			{ "HasOfferingOfType", &UOfferingUtilities::execHasOfferingOfType },
			{ "IsPlayerEquippedWithOfferingWithTag", &UOfferingUtilities::execIsPlayerEquippedWithOfferingWithTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics
	{
		struct OfferingUtilities_eventHasItemLossProtection_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OfferingUtilities_eventHasItemLossProtection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OfferingUtilities_eventHasItemLossProtection_Parms), &Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingUtilities_eventHasItemLossProtection_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingUtilities, nullptr, "HasItemLossProtection", nullptr, nullptr, sizeof(OfferingUtilities_eventHasItemLossProtection_Parms), Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics
	{
		struct OfferingUtilities_eventHasOfferingOfType_Parms
		{
			const UObject* worldContextObject;
			EOfferingEffectType offeringEffectType;
			int32 playerId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_offeringEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_offeringEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OfferingUtilities_eventHasOfferingOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OfferingUtilities_eventHasOfferingOfType_Parms), &Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingUtilities_eventHasOfferingOfType_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_offeringEffectType = { "offeringEffectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingUtilities_eventHasOfferingOfType_Parms, offeringEffectType), Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_offeringEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingUtilities_eventHasOfferingOfType_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_offeringEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_offeringEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingUtilities, nullptr, "HasOfferingOfType", nullptr, nullptr, sizeof(OfferingUtilities_eventHasOfferingOfType_Parms), Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics
	{
		struct OfferingUtilities_eventIsPlayerEquippedWithOfferingWithTag_Parms
		{
			const ADBDPlayer* player;
			FName offeringTag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offeringTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_offeringTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OfferingUtilities_eventIsPlayerEquippedWithOfferingWithTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OfferingUtilities_eventIsPlayerEquippedWithOfferingWithTag_Parms), &Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_offeringTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_offeringTag = { "offeringTag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingUtilities_eventIsPlayerEquippedWithOfferingWithTag_Parms, offeringTag), METADATA_PARAMS(Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_offeringTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_offeringTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingUtilities_eventIsPlayerEquippedWithOfferingWithTag_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_offeringTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingUtilities, nullptr, "IsPlayerEquippedWithOfferingWithTag", nullptr, nullptr, sizeof(OfferingUtilities_eventIsPlayerEquippedWithOfferingWithTag_Parms), Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOfferingUtilities_NoRegister()
	{
		return UOfferingUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UOfferingUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOfferingUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOfferingUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOfferingUtilities_HasItemLossProtection, "HasItemLossProtection" }, // 3200492132
		{ &Z_Construct_UFunction_UOfferingUtilities_HasOfferingOfType, "HasOfferingOfType" }, // 1749239074
		{ &Z_Construct_UFunction_UOfferingUtilities_IsPlayerEquippedWithOfferingWithTag, "IsPlayerEquippedWithOfferingWithTag" }, // 2516995974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOfferingUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OfferingUtilities.h" },
		{ "ModuleRelativePath", "Public/OfferingUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOfferingUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOfferingUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOfferingUtilities_Statics::ClassParams = {
		&UOfferingUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOfferingUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOfferingUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOfferingUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOfferingUtilities, 2732264686);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOfferingUtilities>()
	{
		return UOfferingUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOfferingUtilities(Z_Construct_UClass_UOfferingUtilities, &UOfferingUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOfferingUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOfferingUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
