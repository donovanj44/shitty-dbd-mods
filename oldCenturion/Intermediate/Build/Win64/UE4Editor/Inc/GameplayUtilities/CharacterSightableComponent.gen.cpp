// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/CharacterSightableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSightableComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	GAMEPLAYUTILITIES_API UEnum* Z_Construct_UEnum_GameplayUtilities_ESightStatus();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterSightableComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterSightableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateHandleWrapper();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics
	{
		struct _Script_GameplayUtilities_eventCharacterSightableComponentOnHighestSightStatusChangedBP_Parms
		{
			ESightStatus status;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameplayUtilities_eventCharacterSightableComponentOnHighestSightStatusChangedBP_Parms, status), Z_Construct_UEnum_GameplayUtilities_ESightStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::NewProp_status_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayUtilities, nullptr, "CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameplayUtilities_eventCharacterSightableComponentOnHighestSightStatusChangedBP_Parms), Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCharacterSightableComponent::execGetHighestSightStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESightStatus*)Z_Param__Result=P_THIS->GetHighestSightStatus();
		P_NATIVE_END;
	}
	void UCharacterSightableComponent::StaticRegisterNativesUCharacterSightableComponent()
	{
		UClass* Class = UCharacterSightableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHighestSightStatus", &UCharacterSightableComponent::execGetHighestSightStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics
	{
		struct CharacterSightableComponent_eventGetHighestSightStatus_Parms
		{
			ESightStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterSightableComponent_eventGetHighestSightStatus_Parms, ReturnValue), Z_Construct_UEnum_GameplayUtilities_ESightStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSightableComponent, nullptr, "GetHighestSightStatus", nullptr, nullptr, sizeof(CharacterSightableComponent_eventGetHighestSightStatus_Parms), Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterSightableComponent_NoRegister()
	{
		return UCharacterSightableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterSightableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sightersStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__sightersStatus;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__sightersStatus_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__sightersStatus_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sightersStatus_ValueProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sightDelegateHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__sightDelegateHandles;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__sightDelegateHandles_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__sightDelegateHandles_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHighestSightStatusChangedBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHighestSightStatusChangedBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterSightableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterSightableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSightableComponent_GetHighestSightStatus, "GetHighestSightStatus" }, // 2672934693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterSightableComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterSightableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus = { "_sightersStatus", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightableComponent, _sightersStatus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_Key_KeyProp = { "_sightersStatus_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_ValueProp = { "_sightersStatus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_GameplayUtilities_ESightStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles = { "_sightDelegateHandles", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightableComponent, _sightDelegateHandles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles_Key_KeyProp = { "_sightDelegateHandles_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles_ValueProp = { "_sightDelegateHandles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDelegateHandleWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp_OnHighestSightStatusChangedBP_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp_OnHighestSightStatusChangedBP = { "OnHighestSightStatusChangedBP", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSightableComponent, OnHighestSightStatusChangedBP), Z_Construct_UDelegateFunction_GameplayUtilities_CharacterSightableComponentOnHighestSightStatusChangedBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp_OnHighestSightStatusChangedBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp_OnHighestSightStatusChangedBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSightableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightersStatus_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp__sightDelegateHandles_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSightableComponent_Statics::NewProp_OnHighestSightStatusChangedBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterSightableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSightableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSightableComponent_Statics::ClassParams = {
		&UCharacterSightableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterSightableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterSightableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSightableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterSightableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterSightableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterSightableComponent, 2167577579);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UCharacterSightableComponent>()
	{
		return UCharacterSightableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterSightableComponent(Z_Construct_UClass_UCharacterSightableComponent, &UCharacterSightableComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UCharacterSightableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSightableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
