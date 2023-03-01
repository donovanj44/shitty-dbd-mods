// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavigationQueryFilter_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter_Player() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Player_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Player();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UNavigationQueryFilter_Player::StaticRegisterNativesUNavigationQueryFilter_Player()
	{
	}
	UClass* Z_Construct_UClass_UNavigationQueryFilter_Player_NoRegister()
	{
		return UNavigationQueryFilter_Player::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationQueryFilter_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSearchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSearchNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationQueryFilter_Player.h" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::NewProp_MaxSearchNodes_MetaData[] = {
		{ "Category", "NavigationQueryFilter_Player" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::NewProp_MaxSearchNodes = { "MaxSearchNodes", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter_Player, MaxSearchNodes), METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::NewProp_MaxSearchNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::NewProp_MaxSearchNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::NewProp_MaxSearchNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationQueryFilter_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::ClassParams = {
		&UNavigationQueryFilter_Player::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationQueryFilter_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationQueryFilter_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationQueryFilter_Player, 1833214837);
	template<> DBDBOTS_API UClass* StaticClass<UNavigationQueryFilter_Player>()
	{
		return UNavigationQueryFilter_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationQueryFilter_Player(Z_Construct_UClass_UNavigationQueryFilter_Player, &UNavigationQueryFilter_Player::StaticClass, TEXT("/Script/DBDBots"), TEXT("UNavigationQueryFilter_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
