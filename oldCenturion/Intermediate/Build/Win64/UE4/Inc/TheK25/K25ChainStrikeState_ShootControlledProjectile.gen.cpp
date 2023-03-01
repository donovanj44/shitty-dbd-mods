// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeState_ShootControlledProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeState_ShootControlledProjectile() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeBaseState();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25ChainStrikeState_ShootControlledProjectile::StaticRegisterNativesUK25ChainStrikeState_ShootControlledProjectile()
	{
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_NoRegister()
	{
		return UK25ChainStrikeState_ShootControlledProjectile::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputResetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__inputResetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumThrottleTimeForInputServerCall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumThrottleTimeForInputServerCall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK25ChainStrikeBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainStrikeState_ShootControlledProjectile.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeState_ShootControlledProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__inputResetSpeed_MetaData[] = {
		{ "Category", "K25ChainStrikeState_ShootControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeState_ShootControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__inputResetSpeed = { "_inputResetSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeState_ShootControlledProjectile, _inputResetSpeed), METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__inputResetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__inputResetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__minimumThrottleTimeForInputServerCall_MetaData[] = {
		{ "Category", "K25ChainStrikeState_ShootControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeState_ShootControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__minimumThrottleTimeForInputServerCall = { "_minimumThrottleTimeForInputServerCall", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeState_ShootControlledProjectile, _minimumThrottleTimeForInputServerCall), METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__minimumThrottleTimeForInputServerCall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__minimumThrottleTimeForInputServerCall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__inputResetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::NewProp__minimumThrottleTimeForInputServerCall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeState_ShootControlledProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::ClassParams = {
		&UK25ChainStrikeState_ShootControlledProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeState_ShootControlledProjectile, 253760332);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeState_ShootControlledProjectile>()
	{
		return UK25ChainStrikeState_ShootControlledProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeState_ShootControlledProjectile(Z_Construct_UClass_UK25ChainStrikeState_ShootControlledProjectile, &UK25ChainStrikeState_ShootControlledProjectile::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeState_ShootControlledProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeState_ShootControlledProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
