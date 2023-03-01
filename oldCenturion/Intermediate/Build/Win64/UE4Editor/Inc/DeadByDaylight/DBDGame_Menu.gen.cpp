// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGame_Menu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGame_Menu() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGame_Menu_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGame_Menu();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPartyFlowHandler_NoRegister();
// End Cross Module References
	void ADBDGame_Menu::StaticRegisterNativesADBDGame_Menu()
	{
	}
	UClass* Z_Construct_UClass_ADBDGame_Menu_NoRegister()
	{
		return ADBDGame_Menu::StaticClass();
	}
	struct Z_Construct_UClass_ADBDGame_Menu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__matineeLoopActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__matineeLoopActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__matineeIntroActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__matineeIntroActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__matineeFadeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__matineeFadeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyFlowHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__partyFlowHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartWithSlasher_MetaData[];
#endif
		static void NewProp_StartWithSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartWithSlasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDGame_Menu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Menu_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDGame_Menu.h" },
		{ "ModuleRelativePath", "Public/DBDGame_Menu.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeLoopActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeLoopActor = { "_matineeLoopActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGame_Menu, _matineeLoopActor), Z_Construct_UClass_AMatineeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeLoopActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeLoopActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeIntroActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeIntroActor = { "_matineeIntroActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGame_Menu, _matineeIntroActor), Z_Construct_UClass_AMatineeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeIntroActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeIntroActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeFadeActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeFadeActor = { "_matineeFadeActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGame_Menu, _matineeFadeActor), Z_Construct_UClass_AMatineeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeFadeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeFadeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__partyFlowHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__partyFlowHandler = { "_partyFlowHandler", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGame_Menu, _partyFlowHandler), Z_Construct_UClass_UAtlantaPartyFlowHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__partyFlowHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__partyFlowHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp_StartWithSlasher_MetaData[] = {
		{ "Category", "DBDGame_Menu" },
		{ "ModuleRelativePath", "Public/DBDGame_Menu.h" },
	};
#endif
	void Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp_StartWithSlasher_SetBit(void* Obj)
	{
		((ADBDGame_Menu*)Obj)->StartWithSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp_StartWithSlasher = { "StartWithSlasher", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDGame_Menu), &Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp_StartWithSlasher_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp_StartWithSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp_StartWithSlasher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDGame_Menu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeLoopActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeIntroActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__matineeFadeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp__partyFlowHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGame_Menu_Statics::NewProp_StartWithSlasher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDGame_Menu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDGame_Menu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDGame_Menu_Statics::ClassParams = {
		&ADBDGame_Menu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDGame_Menu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Menu_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Menu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Menu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDGame_Menu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDGame_Menu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDGame_Menu, 2843102303);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDGame_Menu>()
	{
		return ADBDGame_Menu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDGame_Menu(Z_Construct_UClass_ADBDGame_Menu, &ADBDGame_Menu::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDGame_Menu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDGame_Menu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
