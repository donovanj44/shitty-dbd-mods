// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/Unhook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnhook() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UUnhook_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UUnhook();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void UUnhook::StaticRegisterNativesUUnhook()
	{
	}
	UClass* Z_Construct_UClass_UUnhook_NoRegister()
	{
		return UUnhook::StaticClass();
	}
	struct Z_Construct_UClass_UUnhook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerBeingUnhooked_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerBeingUnhooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedCharacterSnapTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hookedCharacterSnapTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unhookingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__unhookingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unhookLoudNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unhookLoudNoiseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snapPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__snapPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snapPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnhook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhook_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Unhook.h" },
		{ "ModuleRelativePath", "Public/Unhook.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhook_Statics::NewProp__playerBeingUnhooked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Unhook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnhook_Statics::NewProp__playerBeingUnhooked = { "_playerBeingUnhooked", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnhook, _playerBeingUnhooked), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnhook_Statics::NewProp__playerBeingUnhooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhook_Statics::NewProp__playerBeingUnhooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhook_Statics::NewProp__hookedCharacterSnapTime_MetaData[] = {
		{ "Category", "Unhook" },
		{ "ModuleRelativePath", "Public/Unhook.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUnhook_Statics::NewProp__hookedCharacterSnapTime = { "_hookedCharacterSnapTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnhook, _hookedCharacterSnapTime), METADATA_PARAMS(Z_Construct_UClass_UUnhook_Statics::NewProp__hookedCharacterSnapTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhook_Statics::NewProp__hookedCharacterSnapTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhook_Statics::NewProp__unhookingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Unhook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnhook_Statics::NewProp__unhookingPlayer = { "_unhookingPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnhook, _unhookingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnhook_Statics::NewProp__unhookingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhook_Statics::NewProp__unhookingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhook_Statics::NewProp__unhookLoudNoiseRange_MetaData[] = {
		{ "Category", "Unhook" },
		{ "ModuleRelativePath", "Public/Unhook.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnhook_Statics::NewProp__unhookLoudNoiseRange = { "_unhookLoudNoiseRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnhook, _unhookLoudNoiseRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UUnhook_Statics::NewProp__unhookLoudNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhook_Statics::NewProp__unhookLoudNoiseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhook_Statics::NewProp__snapPoints_MetaData[] = {
		{ "Category", "Unhook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Unhook.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnhook_Statics::NewProp__snapPoints = { "_snapPoints", nullptr, (EPropertyFlags)0x002008800000200c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnhook, _snapPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnhook_Statics::NewProp__snapPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhook_Statics::NewProp__snapPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnhook_Statics::NewProp__snapPoints_Inner = { "_snapPoints", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnhook_Statics::NewProp__playerBeingUnhooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnhook_Statics::NewProp__hookedCharacterSnapTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnhook_Statics::NewProp__unhookingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnhook_Statics::NewProp__unhookLoudNoiseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnhook_Statics::NewProp__snapPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnhook_Statics::NewProp__snapPoints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnhook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnhook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnhook_Statics::ClassParams = {
		&UUnhook::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnhook_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnhook_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnhook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnhook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnhook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnhook, 3331820457);
	template<> DBDINTERACTION_API UClass* StaticClass<UUnhook>()
	{
		return UUnhook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnhook(Z_Construct_UClass_UUnhook, &UUnhook::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UUnhook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnhook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
