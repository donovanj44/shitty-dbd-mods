// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerDebugComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDebugComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerDebugComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerDebugComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPlayerDebugComponent::StaticRegisterNativesUPlayerDebugComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerDebugComponent_NoRegister()
	{
		return UPlayerDebugComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerDebugComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowPalletPullUpInteraction_MetaData[];
#endif
		static void NewProp__allowPalletPullUpInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowPalletPullUpInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disableStartUpdateMontageDuringEnter_MetaData[];
#endif
		static void NewProp__disableStartUpdateMontageDuringEnter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__disableStartUpdateMontageDuringEnter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerDebugComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDebugComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerDebugComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerDebugComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__allowPalletPullUpInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDebugComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__allowPalletPullUpInteraction_SetBit(void* Obj)
	{
		((UPlayerDebugComponent*)Obj)->_allowPalletPullUpInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__allowPalletPullUpInteraction = { "_allowPalletPullUpInteraction", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerDebugComponent), &Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__allowPalletPullUpInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__allowPalletPullUpInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__allowPalletPullUpInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__disableStartUpdateMontageDuringEnter_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDebugComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__disableStartUpdateMontageDuringEnter_SetBit(void* Obj)
	{
		((UPlayerDebugComponent*)Obj)->_disableStartUpdateMontageDuringEnter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__disableStartUpdateMontageDuringEnter = { "_disableStartUpdateMontageDuringEnter", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerDebugComponent), &Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__disableStartUpdateMontageDuringEnter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__disableStartUpdateMontageDuringEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__disableStartUpdateMontageDuringEnter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerDebugComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__allowPalletPullUpInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDebugComponent_Statics::NewProp__disableStartUpdateMontageDuringEnter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerDebugComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerDebugComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerDebugComponent_Statics::ClassParams = {
		&UPlayerDebugComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerDebugComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDebugComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerDebugComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDebugComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerDebugComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerDebugComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerDebugComponent, 1421409198);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPlayerDebugComponent>()
	{
		return UPlayerDebugComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerDebugComponent(Z_Construct_UClass_UPlayerDebugComponent, &UPlayerDebugComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPlayerDebugComponent"), false, nullptr, nullptr, nullptr);

	void UPlayerDebugComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__disableStartUpdateMontageDuringEnter(TEXT("_disableStartUpdateMontageDuringEnter"));
		static const FName Name__allowPalletPullUpInteraction(TEXT("_allowPalletPullUpInteraction"));

		const bool bIsValid = true
			&& Name__disableStartUpdateMontageDuringEnter == ClassReps[(int32)ENetFields_Private::_disableStartUpdateMontageDuringEnter].Property->GetFName()
			&& Name__allowPalletPullUpInteraction == ClassReps[(int32)ENetFields_Private::_allowPalletPullUpInteraction].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerDebugComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerDebugComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
