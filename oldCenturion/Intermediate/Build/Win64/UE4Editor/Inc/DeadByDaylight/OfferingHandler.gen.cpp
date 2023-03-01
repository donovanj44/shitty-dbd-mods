// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOfferingHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOfferingHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	void UOfferingHandler::StaticRegisterNativesUOfferingHandler()
	{
	}
	UClass* Z_Construct_UClass_UOfferingHandler_NoRegister()
	{
		return UOfferingHandler::StaticClass();
	}
	struct Z_Construct_UClass_UOfferingHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelPerkIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__levelPerkIDs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__levelPerkIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOfferingHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOfferingHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OfferingHandler.h" },
		{ "ModuleRelativePath", "Public/OfferingHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOfferingHandler_Statics::NewProp__levelPerkIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOfferingHandler_Statics::NewProp__levelPerkIDs = { "_levelPerkIDs", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOfferingHandler, _levelPerkIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOfferingHandler_Statics::NewProp__levelPerkIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingHandler_Statics::NewProp__levelPerkIDs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOfferingHandler_Statics::NewProp__levelPerkIDs_Inner = { "_levelPerkIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOfferingHandler_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOfferingHandler_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOfferingHandler, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOfferingHandler_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingHandler_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOfferingHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOfferingHandler_Statics::NewProp__levelPerkIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOfferingHandler_Statics::NewProp__levelPerkIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOfferingHandler_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOfferingHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOfferingHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOfferingHandler_Statics::ClassParams = {
		&UOfferingHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOfferingHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingHandler_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOfferingHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOfferingHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOfferingHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOfferingHandler, 2445872698);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOfferingHandler>()
	{
		return UOfferingHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOfferingHandler(Z_Construct_UClass_UOfferingHandler, &UOfferingHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOfferingHandler"), false, nullptr, nullptr, nullptr);

	void UOfferingHandler::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__levelPerkIDs(TEXT("_levelPerkIDs"));

		const bool bIsValid = true
			&& Name__levelPerkIDs == ClassReps[(int32)ENetFields_Private::_levelPerkIDs].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOfferingHandler"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOfferingHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
