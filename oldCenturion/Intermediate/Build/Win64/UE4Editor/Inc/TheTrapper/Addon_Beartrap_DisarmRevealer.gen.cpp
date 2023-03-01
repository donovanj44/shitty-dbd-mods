// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/Addon_Beartrap_DisarmRevealer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_Beartrap_DisarmRevealer() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
	THETRAPPER_API UClass* Z_Construct_UClass_ABearTrap_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	void UAddon_Beartrap_DisarmRevealer::StaticRegisterNativesUAddon_Beartrap_DisarmRevealer()
	{
	}
	UClass* Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_NoRegister()
	{
		return UAddon_Beartrap_DisarmRevealer::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disarmedTrapMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__disarmedTrapMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__disarmedTrapMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__disarmedTrapMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraRevealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraRevealStatusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__auraRevealStatusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_Beartrap_DisarmRevealer.h" },
		{ "ModuleRelativePath", "Public/Addon_Beartrap_DisarmRevealer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Addon_Beartrap_DisarmRevealer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap = { "_disarmedTrapMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_Beartrap_DisarmRevealer, _disarmedTrapMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap_Key_KeyProp = { "_disarmedTrapMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABearTrap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap_ValueProp = { "_disarmedTrapMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Addon_Beartrap_DisarmRevealer" },
		{ "ModuleRelativePath", "Public/Addon_Beartrap_DisarmRevealer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealDuration = { "_auraRevealDuration", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_Beartrap_DisarmRevealer, _auraRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealStatusEffectID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Addon_Beartrap_DisarmRevealer" },
		{ "ModuleRelativePath", "Public/Addon_Beartrap_DisarmRevealer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealStatusEffectID = { "_auraRevealStatusEffectID", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_Beartrap_DisarmRevealer, _auraRevealStatusEffectID), METADATA_PARAMS(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealStatusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealStatusEffectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__disarmedTrapMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::NewProp__auraRevealStatusEffectID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_Beartrap_DisarmRevealer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::ClassParams = {
		&UAddon_Beartrap_DisarmRevealer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_Beartrap_DisarmRevealer, 1271444444);
	template<> THETRAPPER_API UClass* StaticClass<UAddon_Beartrap_DisarmRevealer>()
	{
		return UAddon_Beartrap_DisarmRevealer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_Beartrap_DisarmRevealer(Z_Construct_UClass_UAddon_Beartrap_DisarmRevealer, &UAddon_Beartrap_DisarmRevealer::StaticClass, TEXT("/Script/TheTrapper"), TEXT("UAddon_Beartrap_DisarmRevealer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_Beartrap_DisarmRevealer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
