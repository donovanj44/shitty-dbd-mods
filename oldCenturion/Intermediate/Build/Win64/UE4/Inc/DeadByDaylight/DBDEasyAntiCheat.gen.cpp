// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDEasyAntiCheat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEasyAntiCheat() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheat_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEasyAntiCheat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	void UDBDEasyAntiCheat::StaticRegisterNativesUDBDEasyAntiCheat()
	{
	}
	UClass* Z_Construct_UClass_UDBDEasyAntiCheat_NoRegister()
	{
		return UDBDEasyAntiCheat::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEasyAntiCheat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__connectedToServer_MetaData[];
#endif
		static void NewProp__connectedToServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__connectedToServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEasyAntiCheat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEasyAntiCheat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEasyAntiCheat.h" },
		{ "ModuleRelativePath", "Public/DBDEasyAntiCheat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__connectedToServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEasyAntiCheat.h" },
	};
#endif
	void Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__connectedToServer_SetBit(void* Obj)
	{
		((UDBDEasyAntiCheat*)Obj)->_connectedToServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__connectedToServer = { "_connectedToServer", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDEasyAntiCheat), &Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__connectedToServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__connectedToServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__connectedToServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEasyAntiCheat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEasyAntiCheat, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDEasyAntiCheat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__connectedToServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEasyAntiCheat_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEasyAntiCheat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEasyAntiCheat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEasyAntiCheat_Statics::ClassParams = {
		&UDBDEasyAntiCheat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDEasyAntiCheat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEasyAntiCheat_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEasyAntiCheat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEasyAntiCheat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEasyAntiCheat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEasyAntiCheat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEasyAntiCheat, 2833672354);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDEasyAntiCheat>()
	{
		return UDBDEasyAntiCheat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEasyAntiCheat(Z_Construct_UClass_UDBDEasyAntiCheat, &UDBDEasyAntiCheat::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDEasyAntiCheat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEasyAntiCheat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
