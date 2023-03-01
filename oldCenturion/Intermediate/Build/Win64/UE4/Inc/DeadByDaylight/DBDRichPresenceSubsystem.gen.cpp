// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDRichPresenceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDRichPresenceSubsystem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDRichPresenceSubsystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDRichPresenceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ONLINEPRESENCE_API UEnum* Z_Construct_UEnum_OnlinePresence_ERichPresenceStatus();
	ONLINEPRESENCE_API UEnum* Z_Construct_UEnum_OnlinePresence_ERichPresenceUserType();
// End Cross Module References
	void UDBDRichPresenceSubsystem::StaticRegisterNativesUDBDRichPresenceSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UDBDRichPresenceSubsystem_NoRegister()
	{
		return UDBDRichPresenceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isValidSetup_MetaData[];
#endif
		static void NewProp__isValidSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isValidSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timerDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__richPresenceStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__richPresenceStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__richPresenceStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__userType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__userType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__userType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDRichPresenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/DBDRichPresenceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__isValidSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDRichPresenceSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__isValidSetup_SetBit(void* Obj)
	{
		((UDBDRichPresenceSubsystem*)Obj)->_isValidSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__isValidSetup = { "_isValidSetup", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichPresenceSubsystem), &Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__isValidSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__isValidSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__isValidSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerDelay_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDRichPresenceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerDelay = { "_timerDelay", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichPresenceSubsystem, _timerDelay), METADATA_PARAMS(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDRichPresenceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerRate = { "_timerRate", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichPresenceSubsystem, _timerRate), METADATA_PARAMS(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__richPresenceStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDRichPresenceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__richPresenceStatus = { "_richPresenceStatus", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichPresenceSubsystem, _richPresenceStatus), Z_Construct_UEnum_OnlinePresence_ERichPresenceStatus, METADATA_PARAMS(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__richPresenceStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__richPresenceStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__richPresenceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__userType_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDRichPresenceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__userType = { "_userType", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichPresenceSubsystem, _userType), Z_Construct_UEnum_OnlinePresence_ERichPresenceUserType, METADATA_PARAMS(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__userType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__userType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__userType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__isValidSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__timerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__richPresenceStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__richPresenceStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__userType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::NewProp__userType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDRichPresenceSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::ClassParams = {
		&UDBDRichPresenceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDRichPresenceSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDRichPresenceSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDRichPresenceSubsystem, 412084760);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDRichPresenceSubsystem>()
	{
		return UDBDRichPresenceSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDRichPresenceSubsystem(Z_Construct_UClass_UDBDRichPresenceSubsystem, &UDBDRichPresenceSubsystem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDRichPresenceSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDRichPresenceSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
