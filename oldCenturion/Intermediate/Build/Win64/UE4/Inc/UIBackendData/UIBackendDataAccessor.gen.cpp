// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIBackendData/Public/UIBackendDataAccessor.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIBackendDataAccessor() {}
// Cross Module References
	UIBACKENDDATA_API UClass* Z_Construct_UClass_UUIBackendDataAccessor_NoRegister();
	UIBACKENDDATA_API UClass* Z_Construct_UClass_UUIBackendDataAccessor();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_UIBackendData();
	SPLINTEREDSTATES_API UClass* Z_Construct_UClass_USplinteredStatesSubsystem_NoRegister();
// End Cross Module References
	void UUIBackendDataAccessor::StaticRegisterNativesUUIBackendDataAccessor()
	{
	}
	UClass* Z_Construct_UClass_UUIBackendDataAccessor_NoRegister()
	{
		return UUIBackendDataAccessor::StaticClass();
	}
	struct Z_Construct_UClass_UUIBackendDataAccessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__splinteredStateSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__splinteredStateSubsystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIBackendDataAccessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UIBackendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIBackendDataAccessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIBackendDataAccessor.h" },
		{ "ModuleRelativePath", "Public/UIBackendDataAccessor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIBackendDataAccessor_Statics::NewProp__splinteredStateSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIBackendDataAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIBackendDataAccessor_Statics::NewProp__splinteredStateSubsystem = { "_splinteredStateSubsystem", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIBackendDataAccessor, _splinteredStateSubsystem), Z_Construct_UClass_USplinteredStatesSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIBackendDataAccessor_Statics::NewProp__splinteredStateSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIBackendDataAccessor_Statics::NewProp__splinteredStateSubsystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIBackendDataAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIBackendDataAccessor_Statics::NewProp__splinteredStateSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIBackendDataAccessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIBackendDataAccessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIBackendDataAccessor_Statics::ClassParams = {
		&UUIBackendDataAccessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUIBackendDataAccessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIBackendDataAccessor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIBackendDataAccessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIBackendDataAccessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIBackendDataAccessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIBackendDataAccessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIBackendDataAccessor, 3956333424);
	template<> UIBACKENDDATA_API UClass* StaticClass<UUIBackendDataAccessor>()
	{
		return UUIBackendDataAccessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIBackendDataAccessor(Z_Construct_UClass_UUIBackendDataAccessor, &UUIBackendDataAccessor::StaticClass, TEXT("/Script/UIBackendData"), TEXT("UUIBackendDataAccessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIBackendDataAccessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
