// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_SetMovementMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SetMovementMode() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_SetMovementMode_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_SetMovementMode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes();
// End Cross Module References
	void UBTService_SetMovementMode::StaticRegisterNativesUBTService_SetMovementMode()
	{
	}
	UClass* Z_Construct_UClass_UBTService_SetMovementMode_NoRegister()
	{
		return UBTService_SetMovementMode::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_SetMovementMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExitMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnExitMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnExitMovementMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEnterMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnEnterMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnEnterMovementMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_SetMovementMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetMovementMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_SetMovementMode.h" },
		{ "ModuleRelativePath", "Public/BTService_SetMovementMode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnExitMovementMode_MetaData[] = {
		{ "Category", "BTService_SetMovementMode" },
		{ "ModuleRelativePath", "Public/BTService_SetMovementMode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnExitMovementMode = { "OnExitMovementMode", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_SetMovementMode, OnExitMovementMode), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnExitMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnExitMovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnExitMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnEnterMovementMode_MetaData[] = {
		{ "Category", "BTService_SetMovementMode" },
		{ "ModuleRelativePath", "Public/BTService_SetMovementMode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnEnterMovementMode = { "OnEnterMovementMode", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_SetMovementMode, OnEnterMovementMode), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnEnterMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnEnterMovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnEnterMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SetMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnExitMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnExitMovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnEnterMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetMovementMode_Statics::NewProp_OnEnterMovementMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_SetMovementMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SetMovementMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SetMovementMode_Statics::ClassParams = {
		&UBTService_SetMovementMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_SetMovementMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetMovementMode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_SetMovementMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetMovementMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_SetMovementMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_SetMovementMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_SetMovementMode, 925786977);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_SetMovementMode>()
	{
		return UBTService_SetMovementMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_SetMovementMode(Z_Construct_UClass_UBTService_SetMovementMode, &UBTService_SetMovementMode::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_SetMovementMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SetMovementMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
