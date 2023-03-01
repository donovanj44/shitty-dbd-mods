// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GestureInteractionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestureInteractionDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGestureInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGestureInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGestureID();
// End Cross Module References
	void UGestureInteractionDefinition::StaticRegisterNativesUGestureInteractionDefinition()
	{
	}
	UClass* Z_Construct_UClass_UGestureInteractionDefinition_NoRegister()
	{
		return UGestureInteractionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UGestureInteractionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gestureID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__gestureID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__gestureID_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGestureInteractionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestureInteractionDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GestureInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/GestureInteractionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestureInteractionDefinition_Statics::NewProp__gestureID_MetaData[] = {
		{ "Category", "GestureInteractionDefinition" },
		{ "ModuleRelativePath", "Public/GestureInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGestureInteractionDefinition_Statics::NewProp__gestureID = { "_gestureID", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGestureInteractionDefinition, _gestureID), Z_Construct_UEnum_DeadByDaylight_EGestureID, METADATA_PARAMS(Z_Construct_UClass_UGestureInteractionDefinition_Statics::NewProp__gestureID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGestureInteractionDefinition_Statics::NewProp__gestureID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGestureInteractionDefinition_Statics::NewProp__gestureID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGestureInteractionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGestureInteractionDefinition_Statics::NewProp__gestureID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGestureInteractionDefinition_Statics::NewProp__gestureID_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGestureInteractionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGestureInteractionDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGestureInteractionDefinition_Statics::ClassParams = {
		&UGestureInteractionDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGestureInteractionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGestureInteractionDefinition_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGestureInteractionDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGestureInteractionDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGestureInteractionDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGestureInteractionDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGestureInteractionDefinition, 3437957309);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGestureInteractionDefinition>()
	{
		return UGestureInteractionDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGestureInteractionDefinition(Z_Construct_UClass_UGestureInteractionDefinition, &UGestureInteractionDefinition::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGestureInteractionDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGestureInteractionDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
