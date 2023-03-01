// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerGameRelevancyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerGameRelevancyComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerGameRelevancyComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerGameRelevancyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
// End Cross Module References
	void UPlayerGameRelevancyComponent::StaticRegisterNativesUPlayerGameRelevancyComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerGameRelevancyComponent_NoRegister()
	{
		return UPlayerGameRelevancyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRelevantToGameplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isRelevantToGameplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerGameRelevancyComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerGameRelevancyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::NewProp__isRelevantToGameplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerGameRelevancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::NewProp__isRelevantToGameplay = { "_isRelevantToGameplay", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerGameRelevancyComponent, _isRelevantToGameplay), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::NewProp__isRelevantToGameplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::NewProp__isRelevantToGameplay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::NewProp__isRelevantToGameplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerGameRelevancyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::ClassParams = {
		&UPlayerGameRelevancyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerGameRelevancyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerGameRelevancyComponent, 3572267394);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPlayerGameRelevancyComponent>()
	{
		return UPlayerGameRelevancyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerGameRelevancyComponent(Z_Construct_UClass_UPlayerGameRelevancyComponent, &UPlayerGameRelevancyComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPlayerGameRelevancyComponent"), false, nullptr, nullptr, nullptr);

	void UPlayerGameRelevancyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isRelevantToGameplay(TEXT("_isRelevantToGameplay"));

		const bool bIsValid = true
			&& Name__isRelevantToGameplay == ClassReps[(int32)ENetFields_Private::_isRelevantToGameplay].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerGameRelevancyComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerGameRelevancyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
