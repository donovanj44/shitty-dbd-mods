// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_FindInteractor_WishList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FindInteractor_WishList() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_FindInteractor_WishList_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_FindInteractor_WishList();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_FindInteractor();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTService_FindInteractor_WishList::StaticRegisterNativesUBTService_FindInteractor_WishList()
	{
	}
	UClass* Z_Construct_UClass_UBTService_FindInteractor_WishList_NoRegister()
	{
		return UBTService_FindInteractor_WishList::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WishListTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WishListTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_FindInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_FindInteractor_WishList.h" },
		{ "ModuleRelativePath", "Public/BTService_FindInteractor_WishList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::NewProp_WishListTag_MetaData[] = {
		{ "Category", "BTService_FindInteractor_WishList" },
		{ "ModuleRelativePath", "Public/BTService_FindInteractor_WishList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::NewProp_WishListTag = { "WishListTag", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_FindInteractor_WishList, WishListTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::NewProp_WishListTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::NewProp_WishListTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::NewProp_WishListTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FindInteractor_WishList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::ClassParams = {
		&UBTService_FindInteractor_WishList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_FindInteractor_WishList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_FindInteractor_WishList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_FindInteractor_WishList, 1158530195);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_FindInteractor_WishList>()
	{
		return UBTService_FindInteractor_WishList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_FindInteractor_WishList(Z_Construct_UClass_UBTService_FindInteractor_WishList, &UBTService_FindInteractor_WishList::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_FindInteractor_WishList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FindInteractor_WishList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
