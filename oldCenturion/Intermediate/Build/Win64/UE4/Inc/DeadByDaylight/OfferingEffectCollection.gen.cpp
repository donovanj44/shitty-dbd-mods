// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingEffectCollection.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingEffectCollection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOfferingEffectCollection_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOfferingEffectCollection();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType();
// End Cross Module References
	DEFINE_FUNCTION(UOfferingEffectCollection::execHasOfferingOfType)
	{
		P_GET_ENUM(EOfferingEffectType,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_GET_PROPERTY(FNameProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOfferingOfType(EOfferingEffectType(Z_Param_type),Z_Param_playerId,Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOfferingEffectCollection::execHasOfferingWithTag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_GET_PROPERTY(FNameProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOfferingWithTag(Z_Param_playerId,Z_Param_tag);
		P_NATIVE_END;
	}
	void UOfferingEffectCollection::StaticRegisterNativesUOfferingEffectCollection()
	{
		UClass* Class = UOfferingEffectCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasOfferingOfType", &UOfferingEffectCollection::execHasOfferingOfType },
			{ "HasOfferingWithTag", &UOfferingEffectCollection::execHasOfferingWithTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics
	{
		struct OfferingEffectCollection_eventHasOfferingOfType_Parms
		{
			EOfferingEffectType type;
			int32 playerId;
			FName tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OfferingEffectCollection_eventHasOfferingOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OfferingEffectCollection_eventHasOfferingOfType_Parms), &Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingEffectCollection_eventHasOfferingOfType_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingEffectCollection_eventHasOfferingOfType_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingEffectCollection_eventHasOfferingOfType_Parms, type), Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingEffectCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingEffectCollection, nullptr, "HasOfferingOfType", nullptr, nullptr, sizeof(OfferingEffectCollection_eventHasOfferingOfType_Parms), Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics
	{
		struct OfferingEffectCollection_eventHasOfferingWithTag_Parms
		{
			int32 playerId;
			FName tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OfferingEffectCollection_eventHasOfferingWithTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OfferingEffectCollection_eventHasOfferingWithTag_Parms), &Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingEffectCollection_eventHasOfferingWithTag_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingEffectCollection_eventHasOfferingWithTag_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingEffectCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingEffectCollection, nullptr, "HasOfferingWithTag", nullptr, nullptr, sizeof(OfferingEffectCollection_eventHasOfferingWithTag_Parms), Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOfferingEffectCollection_NoRegister()
	{
		return UOfferingEffectCollection::StaticClass();
	}
	struct Z_Construct_UClass_UOfferingEffectCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOfferingEffectCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOfferingEffectCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingOfType, "HasOfferingOfType" }, // 1941348455
		{ &Z_Construct_UFunction_UOfferingEffectCollection_HasOfferingWithTag, "HasOfferingWithTag" }, // 384761412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOfferingEffectCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OfferingEffectCollection.h" },
		{ "ModuleRelativePath", "Public/OfferingEffectCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOfferingEffectCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOfferingEffectCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOfferingEffectCollection_Statics::ClassParams = {
		&UOfferingEffectCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOfferingEffectCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingEffectCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOfferingEffectCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOfferingEffectCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOfferingEffectCollection, 2354576646);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOfferingEffectCollection>()
	{
		return UOfferingEffectCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOfferingEffectCollection(Z_Construct_UClass_UOfferingEffectCollection, &UOfferingEffectCollection::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOfferingEffectCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOfferingEffectCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
