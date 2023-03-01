// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/FlashlightableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlightableComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightComponent_NoRegister();
	DBDGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableLightingStrategy_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics
	{
		struct _Script_DBDGameplay_eventFlashlightableComponentOnFlashlightLitChangedEvent_Parms
		{
			bool isLit;
		};
		static void NewProp_isLit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::NewProp_isLit_SetBit(void* Obj)
	{
		((_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightLitChangedEvent_Parms*)Obj)->isLit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::NewProp_isLit = { "isLit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightLitChangedEvent_Parms), &Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::NewProp_isLit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::NewProp_isLit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDGameplay, nullptr, "FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightLitChangedEvent_Parms), Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics
	{
		struct _Script_DBDGameplay_eventFlashlightableComponentOnFlashlightRemovedEvent_Parms
		{
			const UFlashlightComponent* flashlight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flashlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flashlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::NewProp_flashlight_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::NewProp_flashlight = { "flashlight", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightRemovedEvent_Parms, flashlight), Z_Construct_UClass_UFlashlightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::NewProp_flashlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::NewProp_flashlight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::NewProp_flashlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDGameplay, nullptr, "FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightRemovedEvent_Parms), Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics
	{
		struct _Script_DBDGameplay_eventFlashlightableComponentOnFlashlightAddedEvent_Parms
		{
			const UFlashlightComponent* flashlight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flashlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flashlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::NewProp_flashlight_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::NewProp_flashlight = { "flashlight", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightAddedEvent_Parms, flashlight), Z_Construct_UClass_UFlashlightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::NewProp_flashlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::NewProp_flashlight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::NewProp_flashlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDGameplay, nullptr, "FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightAddedEvent_Parms), Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFlashlightableComponent::execIsLit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLit();
		P_NATIVE_END;
	}
	void UFlashlightableComponent::StaticRegisterNativesUFlashlightableComponent()
	{
		UClass* Class = UFlashlightableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLit", &UFlashlightableComponent::execIsLit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics
	{
		struct FlashlightableComponent_eventIsLit_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlashlightableComponent_eventIsLit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlashlightableComponent_eventIsLit_Parms), &Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightableComponent, nullptr, "IsLit", nullptr, nullptr, sizeof(FlashlightableComponent_eventIsLit_Parms), Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightableComponent_IsLit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightableComponent_IsLit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlashlightableComponent_NoRegister()
	{
		return UFlashlightableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlashlightableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__flashlights;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashlights_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightingStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightingStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFlashlightLitChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlashlightLitChangedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFlashlightRemovedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlashlightRemovedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFlashlightAddedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlashlightAddedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlashlightableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlashlightableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlashlightableComponent_IsLit, "IsLit" }, // 1381640417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlashlightableComponent.h" },
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__flashlights_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__flashlights = { "_flashlights", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightableComponent, _flashlights), METADATA_PARAMS(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__flashlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__flashlights_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__flashlights_ElementProp = { "_flashlights", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlashlightComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__lightingStrategy_MetaData[] = {
		{ "Category", "FlashlightableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__lightingStrategy = { "_lightingStrategy", nullptr, (EPropertyFlags)0x0042000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightableComponent, _lightingStrategy), Z_Construct_UClass_UFlashlightableLightingStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__lightingStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__lightingStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightLitChangedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightLitChangedEvent = { "OnFlashlightLitChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightableComponent, OnFlashlightLitChangedEvent), Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightLitChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightLitChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightLitChangedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightRemovedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightRemovedEvent = { "OnFlashlightRemovedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightableComponent, OnFlashlightRemovedEvent), Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightRemovedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightRemovedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightRemovedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightAddedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlashlightableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightAddedEvent = { "OnFlashlightAddedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightableComponent, OnFlashlightAddedEvent), Z_Construct_UDelegateFunction_DBDGameplay_FlashlightableComponentOnFlashlightAddedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightAddedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightAddedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlashlightableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__flashlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__flashlights_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp__lightingStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightLitChangedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightRemovedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightableComponent_Statics::NewProp_OnFlashlightAddedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlashlightableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlashlightableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlashlightableComponent_Statics::ClassParams = {
		&UFlashlightableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlashlightableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlashlightableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlashlightableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlashlightableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlashlightableComponent, 1916550990);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UFlashlightableComponent>()
	{
		return UFlashlightableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlashlightableComponent(Z_Construct_UClass_UFlashlightableComponent, &UFlashlightableComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UFlashlightableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlashlightableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
