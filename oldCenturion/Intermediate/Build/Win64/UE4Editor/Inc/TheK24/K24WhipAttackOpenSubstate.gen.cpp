// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24WhipAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24WhipAttackOpenSubstate() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttackOpenSubstate_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24WhipAttackOpenSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstate();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UK24WhipAttackOpenSubstate::StaticRegisterNativesUK24WhipAttackOpenSubstate()
	{
	}
	UClass* Z_Construct_UClass_UK24WhipAttackOpenSubstate_NoRegister()
	{
		return UK24WhipAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lvl3SpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lvl3SpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackOpenSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K24WhipAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/K24WhipAttackOpenSubstate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::NewProp__lvl3SpeedCurve_MetaData[] = {
		{ "Category", "K24WhipAttackOpenSubstate" },
		{ "ModuleRelativePath", "Public/K24WhipAttackOpenSubstate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::NewProp__lvl3SpeedCurve = { "_lvl3SpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24WhipAttackOpenSubstate, _lvl3SpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::NewProp__lvl3SpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::NewProp__lvl3SpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::NewProp__lvl3SpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24WhipAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::ClassParams = {
		&UK24WhipAttackOpenSubstate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24WhipAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24WhipAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24WhipAttackOpenSubstate, 2757142456);
	template<> THEK24_API UClass* StaticClass<UK24WhipAttackOpenSubstate>()
	{
		return UK24WhipAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24WhipAttackOpenSubstate(Z_Construct_UClass_UK24WhipAttackOpenSubstate, &UK24WhipAttackOpenSubstate::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24WhipAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24WhipAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
