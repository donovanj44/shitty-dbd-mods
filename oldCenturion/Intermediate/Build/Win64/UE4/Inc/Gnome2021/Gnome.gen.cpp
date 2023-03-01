// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gnome2021/Public/Gnome.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGnome() {}
// Cross Module References
	GNOME2021_API UClass* Z_Construct_UClass_AGnome_NoRegister();
	GNOME2021_API UClass* Z_Construct_UClass_AGnome();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_ARespawnableInteractable();
	UPackage* Z_Construct_UPackage__Script_Gnome2021();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	GNOME2021_API UClass* Z_Construct_UClass_UGnomeInteraction_NoRegister();
// End Cross Module References
	static FName NAME_AGnome_Cosmetic_OnInteractionCompleted = FName(TEXT("Cosmetic_OnInteractionCompleted"));
	void AGnome::Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer)
	{
		Gnome_eventCosmetic_OnInteractionCompleted_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGnome_Cosmetic_OnInteractionCompleted),&Parms);
	}
	static FName NAME_AGnome_Cosmetic_OnStartedInteracting = FName(TEXT("Cosmetic_OnStartedInteracting"));
	void AGnome::Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		Gnome_eventCosmetic_OnStartedInteracting_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		Parms.interactionDuration=interactionDuration;
		ProcessEvent(FindFunctionChecked(NAME_AGnome_Cosmetic_OnStartedInteracting),&Parms);
	}
	static FName NAME_AGnome_Cosmetic_OnStoppedInteracting = FName(TEXT("Cosmetic_OnStoppedInteracting"));
	void AGnome::Cosmetic_OnStoppedInteracting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGnome_Cosmetic_OnStoppedInteracting),NULL);
	}
	void AGnome::StaticRegisterNativesAGnome()
	{
	}
	struct Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gnome_eventCosmetic_OnInteractionCompleted_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGnome, nullptr, "Cosmetic_OnInteractionCompleted", nullptr, nullptr, sizeof(Gnome_eventCosmetic_OnInteractionCompleted_Parms), Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration = { "interactionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gnome_eventCosmetic_OnStartedInteracting_Parms, interactionDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gnome_eventCosmetic_OnStartedInteracting_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGnome, nullptr, "Cosmetic_OnStartedInteracting", nullptr, nullptr, sizeof(Gnome_eventCosmetic_OnStartedInteracting_Parms), Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGnome, nullptr, "Cosmetic_OnStoppedInteracting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGnome_NoRegister()
	{
		return AGnome::StaticClass();
	}
	struct Z_Construct_UClass_AGnome_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraColorWhileInteracting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__auraColorWhileInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteractionSecondsToChargeKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gnomeInteractionSecondsToChargeKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteractionSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gnomeInteractionSecondsToCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gnomeSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gnomeInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gnomeInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteractionChargeableKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gnomeInteractionChargeableKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteractionChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gnomeInteractionChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteractionKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gnomeInteractionKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gnomeInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gnomeInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGnome_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARespawnableInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Gnome2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGnome_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGnome_Cosmetic_OnInteractionCompleted, "Cosmetic_OnInteractionCompleted" }, // 1849555495
		{ &Z_Construct_UFunction_AGnome_Cosmetic_OnStartedInteracting, "Cosmetic_OnStartedInteracting" }, // 545725835
		{ &Z_Construct_UFunction_AGnome_Cosmetic_OnStoppedInteracting, "Cosmetic_OnStoppedInteracting" }, // 3969013368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gnome.h" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__auraColorWhileInteracting_MetaData[] = {
		{ "Category", "Gnome" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__auraColorWhileInteracting = { "_auraColorWhileInteracting", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _auraColorWhileInteracting), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__auraColorWhileInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__auraColorWhileInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToChargeKiller_MetaData[] = {
		{ "Category", "Gnome" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToChargeKiller = { "_gnomeInteractionSecondsToChargeKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteractionSecondsToChargeKiller), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToChargeKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToChargeKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToCharge_MetaData[] = {
		{ "Category", "Gnome" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToCharge = { "_gnomeInteractionSecondsToCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteractionSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeSkeletalMesh = { "_gnomeSkeletalMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionZone = { "_gnomeInteractionZone", nullptr, (EPropertyFlags)0x004000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteractionZone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractor = { "_gnomeInteractor", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeableKiller_MetaData[] = {
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeableKiller = { "_gnomeInteractionChargeableKiller", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteractionChargeableKiller), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeableKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeableKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeable_MetaData[] = {
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeable = { "_gnomeInteractionChargeable", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteractionChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionKiller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionKiller = { "_gnomeInteractionKiller", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteractionKiller), Z_Construct_UClass_UGnomeInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gnome" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gnome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteraction = { "_gnomeInteraction", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGnome, _gnomeInteraction), Z_Construct_UClass_UGnomeInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGnome_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__auraColorWhileInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToChargeKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionSecondsToCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeableKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteractionKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnome_Statics::NewProp__gnomeInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGnome_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGnome>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGnome_Statics::ClassParams = {
		&AGnome::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGnome_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGnome_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGnome_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGnome()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGnome_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGnome, 2418373741);
	template<> GNOME2021_API UClass* StaticClass<AGnome>()
	{
		return AGnome::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGnome(Z_Construct_UClass_AGnome, &AGnome::StaticClass, TEXT("/Script/Gnome2021"), TEXT("AGnome"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGnome);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
