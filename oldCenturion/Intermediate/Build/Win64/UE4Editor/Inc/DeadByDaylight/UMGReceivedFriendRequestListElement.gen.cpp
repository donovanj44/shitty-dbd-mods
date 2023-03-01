// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGReceivedFriendRequestListElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGReceivedFriendRequestListElement() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGReceivedFriendRequestListElement_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGReceivedFriendRequestListElement();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListElement();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
// End Cross Module References
	void UUMGReceivedFriendRequestListElement::StaticRegisterNativesUUMGReceivedFriendRequestListElement()
	{
	}
	UClass* Z_Construct_UClass_UUMGReceivedFriendRequestListElement_NoRegister()
	{
		return UUMGReceivedFriendRequestListElement::StaticClass();
	}
	struct Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendRequestStatusRichText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendRequestStatusRichText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseFriendListElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGReceivedFriendRequestListElement.h" },
		{ "ModuleRelativePath", "Public/UMGReceivedFriendRequestListElement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::NewProp_FriendRequestStatusRichText_MetaData[] = {
		{ "Category", "UMGReceivedFriendRequestListElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGReceivedFriendRequestListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::NewProp_FriendRequestStatusRichText = { "FriendRequestStatusRichText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGReceivedFriendRequestListElement, FriendRequestStatusRichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::NewProp_FriendRequestStatusRichText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::NewProp_FriendRequestStatusRichText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::NewProp_FriendRequestStatusRichText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGReceivedFriendRequestListElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::ClassParams = {
		&UUMGReceivedFriendRequestListElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGReceivedFriendRequestListElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGReceivedFriendRequestListElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGReceivedFriendRequestListElement, 3992021256);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGReceivedFriendRequestListElement>()
	{
		return UUMGReceivedFriendRequestListElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGReceivedFriendRequestListElement(Z_Construct_UClass_UUMGReceivedFriendRequestListElement, &UUMGReceivedFriendRequestListElement::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGReceivedFriendRequestListElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGReceivedFriendRequestListElement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
