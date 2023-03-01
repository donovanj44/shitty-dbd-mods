// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbAbsorberComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbAbsorberComponent() {}
// Cross Module References
	THEONI_API UFunction* Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	THEONI_API UFunction* Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbAbsorberComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbAbsorberComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbDropperComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics
	{
		struct _Script_TheOni_eventBloodOrbAbsorberComponentOnIsAbsorbingChanged_Parms
		{
			bool isAbsorbing;
		};
		static void NewProp_isAbsorbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAbsorbing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::NewProp_isAbsorbing_SetBit(void* Obj)
	{
		((_Script_TheOni_eventBloodOrbAbsorberComponentOnIsAbsorbingChanged_Parms*)Obj)->isAbsorbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::NewProp_isAbsorbing = { "isAbsorbing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TheOni_eventBloodOrbAbsorberComponentOnIsAbsorbingChanged_Parms), &Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::NewProp_isAbsorbing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::NewProp_isAbsorbing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheOni, nullptr, "BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheOni_eventBloodOrbAbsorberComponentOnIsAbsorbingChanged_Parms), Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics
	{
		struct _Script_TheOni_eventBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed_Parms
		{
			ABloodOrb* bloodOrb;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::NewProp_bloodOrb = { "bloodOrb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TheOni_eventBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed_Parms, bloodOrb), Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::NewProp_bloodOrb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheOni, nullptr, "BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheOni_eventBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed_Parms), Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBloodOrbAbsorberComponent::execIsInAbsorbMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInAbsorbMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbAbsorberComponent::execSetInAbsorbMode)
	{
		P_GET_UBOOL(Z_Param_inAbsorptionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInAbsorbMode(Z_Param_inAbsorptionMode);
		P_NATIVE_END;
	}
	void UBloodOrbAbsorberComponent::StaticRegisterNativesUBloodOrbAbsorberComponent()
	{
		UClass* Class = UBloodOrbAbsorberComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInAbsorbMode", &UBloodOrbAbsorberComponent::execIsInAbsorbMode },
			{ "SetInAbsorbMode", &UBloodOrbAbsorberComponent::execSetInAbsorbMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics
	{
		struct BloodOrbAbsorberComponent_eventIsInAbsorbMode_Parms
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
	void Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BloodOrbAbsorberComponent_eventIsInAbsorbMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BloodOrbAbsorberComponent_eventIsInAbsorbMode_Parms), &Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbAbsorberComponent, nullptr, "IsInAbsorbMode", nullptr, nullptr, sizeof(BloodOrbAbsorberComponent_eventIsInAbsorbMode_Parms), Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics
	{
		struct BloodOrbAbsorberComponent_eventSetInAbsorbMode_Parms
		{
			bool inAbsorptionMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inAbsorptionMode_MetaData[];
#endif
		static void NewProp_inAbsorptionMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inAbsorptionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::NewProp_inAbsorptionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::NewProp_inAbsorptionMode_SetBit(void* Obj)
	{
		((BloodOrbAbsorberComponent_eventSetInAbsorbMode_Parms*)Obj)->inAbsorptionMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::NewProp_inAbsorptionMode = { "inAbsorptionMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BloodOrbAbsorberComponent_eventSetInAbsorbMode_Parms), &Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::NewProp_inAbsorptionMode_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::NewProp_inAbsorptionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::NewProp_inAbsorptionMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::NewProp_inAbsorptionMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbAbsorberComponent, nullptr, "SetInAbsorbMode", nullptr, nullptr, sizeof(BloodOrbAbsorberComponent_eventSetInAbsorbMode_Parms), Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbAbsorberComponent_NoRegister()
	{
		return UBloodOrbAbsorberComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperBloodOrbDropperComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__camperBloodOrbDropperComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperBloodOrbDropperComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsorbLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsAbsorbingChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsAbsorbingChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authority_OnBloodOrbAbsorbed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Authority_OnBloodOrbAbsorbed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbAbsorberComponent_IsInAbsorbMode, "IsInAbsorbMode" }, // 1618253236
		{ &Z_Construct_UFunction_UBloodOrbAbsorberComponent_SetInAbsorbMode, "SetInAbsorbMode" }, // 1660571777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BloodOrbAbsorberComponent.h" },
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp__camperBloodOrbDropperComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp__camperBloodOrbDropperComponents = { "_camperBloodOrbDropperComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbAbsorberComponent, _camperBloodOrbDropperComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp__camperBloodOrbDropperComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp__camperBloodOrbDropperComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp__camperBloodOrbDropperComponents_Inner = { "_camperBloodOrbDropperComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBloodOrbDropperComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_AbsorbLocationOffset_MetaData[] = {
		{ "Category", "BloodOrbAbsorberComponent" },
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_AbsorbLocationOffset = { "AbsorbLocationOffset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbAbsorberComponent, AbsorbLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_AbsorbLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_AbsorbLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_OnIsAbsorbingChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_OnIsAbsorbingChanged = { "OnIsAbsorbingChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbAbsorberComponent, OnIsAbsorbingChanged), Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentOnIsAbsorbingChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_OnIsAbsorbingChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_OnIsAbsorbingChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_Authority_OnBloodOrbAbsorbed_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodOrbAbsorberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_Authority_OnBloodOrbAbsorbed = { "Authority_OnBloodOrbAbsorbed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbAbsorberComponent, Authority_OnBloodOrbAbsorbed), Z_Construct_UDelegateFunction_TheOni_BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_Authority_OnBloodOrbAbsorbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_Authority_OnBloodOrbAbsorbed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp__camperBloodOrbDropperComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp__camperBloodOrbDropperComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_AbsorbLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_OnIsAbsorbingChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::NewProp_Authority_OnBloodOrbAbsorbed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbAbsorberComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::ClassParams = {
		&UBloodOrbAbsorberComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbAbsorberComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbAbsorberComponent, 703150378);
	template<> THEONI_API UClass* StaticClass<UBloodOrbAbsorberComponent>()
	{
		return UBloodOrbAbsorberComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbAbsorberComponent(Z_Construct_UClass_UBloodOrbAbsorberComponent, &UBloodOrbAbsorberComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbAbsorberComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbAbsorberComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
