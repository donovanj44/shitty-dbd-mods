// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/SurvivorAimStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAimStateComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_USurvivorAimStateComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_USurvivorAimStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
// End Cross Module References
	void USurvivorAimStateComponent::StaticRegisterNativesUSurvivorAimStateComponent()
	{
	}
	UClass* Z_Construct_UClass_USurvivorAimStateComponent_NoRegister()
	{
		return USurvivorAimStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorAimStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimableCollectable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimableCollectable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorAimStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimStateComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorAimStateComponent.h" },
		{ "ModuleRelativePath", "Public/SurvivorAimStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimStateComponent_Statics::NewProp__aimableCollectable_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorAimStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorAimStateComponent_Statics::NewProp__aimableCollectable = { "_aimableCollectable", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAimStateComponent, _aimableCollectable), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorAimStateComponent_Statics::NewProp__aimableCollectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimStateComponent_Statics::NewProp__aimableCollectable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorAimStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimStateComponent_Statics::NewProp__aimableCollectable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorAimStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorAimStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorAimStateComponent_Statics::ClassParams = {
		&USurvivorAimStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USurvivorAimStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimStateComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorAimStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorAimStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorAimStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorAimStateComponent, 3889645318);
	template<> DBDGAMEPLAY_API UClass* StaticClass<USurvivorAimStateComponent>()
	{
		return USurvivorAimStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorAimStateComponent(Z_Construct_UClass_USurvivorAimStateComponent, &USurvivorAimStateComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("USurvivorAimStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorAimStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
