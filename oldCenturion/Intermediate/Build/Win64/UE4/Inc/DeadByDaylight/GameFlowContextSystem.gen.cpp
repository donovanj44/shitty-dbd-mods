// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameFlowContextSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFlowContextSystem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameFlowContextSystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameFlowContextSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URootMovie_NoRegister();
// End Cross Module References
	void UGameFlowContextSystem::StaticRegisterNativesUGameFlowContextSystem()
	{
	}
	UClass* Z_Construct_UClass_UGameFlowContextSystem_NoRegister()
	{
		return UGameFlowContextSystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameFlowContextSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RootMovie_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RootMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFlowContextSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFlowContextSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFlowContextSystem.h" },
		{ "ModuleRelativePath", "Public/GameFlowContextSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFlowContextSystem_Statics::NewProp_m_RootMovie_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowContextSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameFlowContextSystem_Statics::NewProp_m_RootMovie = { "m_RootMovie", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameFlowContextSystem, m_RootMovie), Z_Construct_UClass_URootMovie_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameFlowContextSystem_Statics::NewProp_m_RootMovie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowContextSystem_Statics::NewProp_m_RootMovie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFlowContextSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowContextSystem_Statics::NewProp_m_RootMovie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFlowContextSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFlowContextSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameFlowContextSystem_Statics::ClassParams = {
		&UGameFlowContextSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFlowContextSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowContextSystem_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFlowContextSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowContextSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFlowContextSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameFlowContextSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameFlowContextSystem, 923632515);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameFlowContextSystem>()
	{
		return UGameFlowContextSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameFlowContextSystem(Z_Construct_UClass_UGameFlowContextSystem, &UGameFlowContextSystem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameFlowContextSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFlowContextSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
