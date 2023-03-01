// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LobbyControllerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyControllerSubsystem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULobbyControllerSubsystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULobbyControllerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULobbyDisplayStandController_NoRegister();
// End Cross Module References
	void ULobbyControllerSubsystem::StaticRegisterNativesULobbyControllerSubsystem()
	{
	}
	UClass* Z_Construct_UClass_ULobbyControllerSubsystem_NoRegister()
	{
		return ULobbyControllerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyControllerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayStandControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__displayStandControllers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__displayStandControllers_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__displayStandControllers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localPlayerDisplayStandController_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__localPlayerDisplayStandController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyControllerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyControllerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LobbyControllerSubsystem.h" },
		{ "ModuleRelativePath", "Public/LobbyControllerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/LobbyControllerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers = { "_displayStandControllers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyControllerSubsystem, _displayStandControllers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers_Key_KeyProp = { "_displayStandControllers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers_ValueProp = { "_displayStandControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ULobbyDisplayStandController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__localPlayerDisplayStandController_MetaData[] = {
		{ "ModuleRelativePath", "Public/LobbyControllerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__localPlayerDisplayStandController = { "_localPlayerDisplayStandController", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyControllerSubsystem, _localPlayerDisplayStandController), Z_Construct_UClass_ULobbyDisplayStandController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__localPlayerDisplayStandController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__localPlayerDisplayStandController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyControllerSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__displayStandControllers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyControllerSubsystem_Statics::NewProp__localPlayerDisplayStandController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyControllerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyControllerSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyControllerSubsystem_Statics::ClassParams = {
		&ULobbyControllerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULobbyControllerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyControllerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyControllerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyControllerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyControllerSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyControllerSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyControllerSubsystem, 2685891299);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULobbyControllerSubsystem>()
	{
		return ULobbyControllerSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyControllerSubsystem(Z_Construct_UClass_ULobbyControllerSubsystem, &ULobbyControllerSubsystem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULobbyControllerSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyControllerSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
