// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonRifle() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonRifle_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonRifle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_ARifleChain_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTriggerableActivatorComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UFireHarpoonRifleInteraction_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonChainPositioner_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URiflePlayerLinker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URifleChainTensionComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonProviderComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonLauncher_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainLinkableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHarpoonRifle::execAuthority_OnFireHarpoon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnFireHarpoon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHarpoonRifle::execGetChain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ARifleChain**)Z_Param__Result=P_THIS->GetChain();
		P_NATIVE_END;
	}
	void AHarpoonRifle::StaticRegisterNativesAHarpoonRifle()
	{
		UClass* Class = AHarpoonRifle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnFireHarpoon", &AHarpoonRifle::execAuthority_OnFireHarpoon },
			{ "GetChain", &AHarpoonRifle::execGetChain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHarpoonRifle, nullptr, "Authority_OnFireHarpoon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics
	{
		struct HarpoonRifle_eventGetChain_Parms
		{
			ARifleChain* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HarpoonRifle_eventGetChain_Parms, ReturnValue), Z_Construct_UClass_ARifleChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHarpoonRifle, nullptr, "GetChain", nullptr, nullptr, sizeof(HarpoonRifle_eventGetChain_Parms), Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHarpoonRifle_GetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHarpoonRifle_GetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHarpoonRifle_NoRegister()
	{
		return AHarpoonRifle::StaticClass();
	}
	struct Z_Construct_UClass_AHarpoonRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crowsActivatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crowsActivatorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__fireInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoonChainPositioner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__harpoonChainPositioner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerLinker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerLinker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainTensionChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainTensionChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainTensionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainTensionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoonProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__harpoonProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__launcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__launcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crowActiveRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__crowActiveRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rifleHarpoonLoadingSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__rifleHarpoonLoadingSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rifleMuzzleSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__rifleMuzzleSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__chainClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerLinkableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__killerLinkableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorLinkableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__survivorLinkableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHarpoonRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHarpoonRifle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHarpoonRifle_Authority_OnFireHarpoon, "Authority_OnFireHarpoon" }, // 3861930700
		{ &Z_Construct_UFunction_AHarpoonRifle_GetChain, "GetChain" }, // 697909006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HarpoonRifle.h" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowsActivatorComponent_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowsActivatorComponent = { "_crowsActivatorComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _crowsActivatorComponent), Z_Construct_UClass_UTriggerableActivatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowsActivatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowsActivatorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__fireInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__fireInteraction = { "_fireInteraction", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _fireInteraction), Z_Construct_UClass_UFireHarpoonRifleInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__fireInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__fireInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonChainPositioner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonChainPositioner = { "_harpoonChainPositioner", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _harpoonChainPositioner), Z_Construct_UClass_UHarpoonChainPositioner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonChainPositioner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonChainPositioner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__playerLinker_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__playerLinker = { "_playerLinker", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _playerLinker), Z_Construct_UClass_URiflePlayerLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__playerLinker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__playerLinker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionChargeable_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionChargeable = { "_chainTensionChargeable", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _chainTensionChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionComponent = { "_chainTensionComponent", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _chainTensionComponent), Z_Construct_UClass_URifleChainTensionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chain_MetaData[] = {
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chain = { "_chain", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _chain), Z_Construct_UClass_ARifleChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonProvider_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonProvider = { "_harpoonProvider", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _harpoonProvider), Z_Construct_UClass_UHarpoonProviderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__launcher_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__launcher = { "_launcher", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _launcher), Z_Construct_UClass_UHarpoonLauncher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__launcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__launcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowActiveRange_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowActiveRange = { "_crowActiveRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _crowActiveRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowActiveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowActiveRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleHarpoonLoadingSocket_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleHarpoonLoadingSocket = { "_rifleHarpoonLoadingSocket", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _rifleHarpoonLoadingSocket), METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleHarpoonLoadingSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleHarpoonLoadingSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleMuzzleSocket_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleMuzzleSocket = { "_rifleMuzzleSocket", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _rifleMuzzleSocket), METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleMuzzleSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleMuzzleSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainClass_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainClass = { "_chainClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _chainClass), Z_Construct_UClass_ARifleChain_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__killerLinkableClass_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__killerLinkableClass = { "_killerLinkableClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _killerLinkableClass), Z_Construct_UClass_UChainLinkableComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__killerLinkableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__killerLinkableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__survivorLinkableClass_MetaData[] = {
		{ "Category", "HarpoonRifle" },
		{ "ModuleRelativePath", "Public/HarpoonRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__survivorLinkableClass = { "_survivorLinkableClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonRifle, _survivorLinkableClass), Z_Construct_UClass_UChainLinkableComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__survivorLinkableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__survivorLinkableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHarpoonRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowsActivatorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__fireInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonChainPositioner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__playerLinker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainTensionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__harpoonProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__launcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__crowActiveRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleHarpoonLoadingSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__rifleMuzzleSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__chainClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__killerLinkableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonRifle_Statics::NewProp__survivorLinkableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHarpoonRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHarpoonRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHarpoonRifle_Statics::ClassParams = {
		&AHarpoonRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHarpoonRifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHarpoonRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHarpoonRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHarpoonRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHarpoonRifle, 700377854);
	template<> THEGUNSLINGER_API UClass* StaticClass<AHarpoonRifle>()
	{
		return AHarpoonRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHarpoonRifle(Z_Construct_UClass_AHarpoonRifle, &AHarpoonRifle::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("AHarpoonRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHarpoonRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
