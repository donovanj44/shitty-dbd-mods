// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDInGameHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDInGameHud() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDInGameHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDInGameHud();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseHud();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COMPETENCE_API UClass* Z_Construct_UClass_UCompetenceDebugger_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ADBDInGameHud::StaticRegisterNativesADBDInGameHud()
	{
	}
	UClass* Z_Construct_UClass_ADBDInGameHud_NoRegister()
	{
		return ADBDInGameHud::StaticClass();
	}
	struct Z_Construct_UClass_ADBDInGameHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__competenceDebugger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__competenceDebugger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugFontObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__debugFontObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDInGameHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseHud,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDInGameHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DBDInGameHud.h" },
		{ "ModuleRelativePath", "Public/DBDInGameHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__competenceDebugger_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDInGameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__competenceDebugger = { "_competenceDebugger", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDInGameHud, _competenceDebugger), Z_Construct_UClass_UCompetenceDebugger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__competenceDebugger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__competenceDebugger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__debugFontObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDInGameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__debugFontObj = { "_debugFontObj", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDInGameHud, _debugFontObj), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__debugFontObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__debugFontObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDInGameHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__competenceDebugger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDInGameHud_Statics::NewProp__debugFontObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDInGameHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDInGameHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDInGameHud_Statics::ClassParams = {
		&ADBDInGameHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDInGameHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDInGameHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDInGameHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDInGameHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDInGameHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDInGameHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDInGameHud, 219848948);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDInGameHud>()
	{
		return ADBDInGameHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDInGameHud(Z_Construct_UClass_ADBDInGameHud, &ADBDInGameHud::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDInGameHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDInGameHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
