// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PalletPulldownBlockerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePalletPulldownBlockerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPalletPulldownBlockerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPalletPulldownBlockerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UPalletPulldownBlockerComponent::execMulticast_PalletPulldownBlockedHideCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PalletPulldownBlockedHideCosmetic_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPalletPulldownBlockerComponent::execMulticast_PalletPulldownBlockedShowCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PalletPulldownBlockedShowCosmetic_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPalletPulldownBlockerComponent::execOnRep_IsPalletPulldownBlockedByEntity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsPalletPulldownBlockedByEntity();
		P_NATIVE_END;
	}
	static FName NAME_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic = FName(TEXT("Multicast_PalletPulldownBlockedHideCosmetic"));
	void UPalletPulldownBlockerComponent::Multicast_PalletPulldownBlockedHideCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic),NULL);
	}
	static FName NAME_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic = FName(TEXT("Multicast_PalletPulldownBlockedShowCosmetic"));
	void UPalletPulldownBlockerComponent::Multicast_PalletPulldownBlockedShowCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic),NULL);
	}
	void UPalletPulldownBlockerComponent::StaticRegisterNativesUPalletPulldownBlockerComponent()
	{
		UClass* Class = UPalletPulldownBlockerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_PalletPulldownBlockedHideCosmetic", &UPalletPulldownBlockerComponent::execMulticast_PalletPulldownBlockedHideCosmetic },
			{ "Multicast_PalletPulldownBlockedShowCosmetic", &UPalletPulldownBlockerComponent::execMulticast_PalletPulldownBlockedShowCosmetic },
			{ "OnRep_IsPalletPulldownBlockedByEntity", &UPalletPulldownBlockerComponent::execOnRep_IsPalletPulldownBlockedByEntity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletPulldownBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPalletPulldownBlockerComponent, nullptr, "Multicast_PalletPulldownBlockedHideCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletPulldownBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPalletPulldownBlockerComponent, nullptr, "Multicast_PalletPulldownBlockedShowCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletPulldownBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPalletPulldownBlockerComponent, nullptr, "OnRep_IsPalletPulldownBlockedByEntity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPalletPulldownBlockerComponent_NoRegister()
	{
		return UPalletPulldownBlockerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockedDisappearFxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__blockedDisappearFxTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPalletPulldownBlockedByEntity_MetaData[];
#endif
		static void NewProp__isPalletPulldownBlockedByEntity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPalletPulldownBlockedByEntity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedHideCosmetic, "Multicast_PalletPulldownBlockedHideCosmetic" }, // 2769213159
		{ &Z_Construct_UFunction_UPalletPulldownBlockerComponent_Multicast_PalletPulldownBlockedShowCosmetic, "Multicast_PalletPulldownBlockedShowCosmetic" }, // 2804201063
		{ &Z_Construct_UFunction_UPalletPulldownBlockerComponent_OnRep_IsPalletPulldownBlockedByEntity, "OnRep_IsPalletPulldownBlockedByEntity" }, // 2124184559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PalletPulldownBlockerComponent.h" },
		{ "ModuleRelativePath", "Public/PalletPulldownBlockerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__blockedDisappearFxTime_MetaData[] = {
		{ "Category", "PalletPulldownBlockerComponent" },
		{ "ModuleRelativePath", "Public/PalletPulldownBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__blockedDisappearFxTime = { "_blockedDisappearFxTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPalletPulldownBlockerComponent, _blockedDisappearFxTime), METADATA_PARAMS(Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__blockedDisappearFxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__blockedDisappearFxTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__isPalletPulldownBlockedByEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/PalletPulldownBlockerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__isPalletPulldownBlockedByEntity_SetBit(void* Obj)
	{
		((UPalletPulldownBlockerComponent*)Obj)->_isPalletPulldownBlockedByEntity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__isPalletPulldownBlockedByEntity = { "_isPalletPulldownBlockedByEntity", "OnRep_IsPalletPulldownBlockedByEntity", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPalletPulldownBlockerComponent), &Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__isPalletPulldownBlockedByEntity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__isPalletPulldownBlockedByEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__isPalletPulldownBlockedByEntity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__blockedDisappearFxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::NewProp__isPalletPulldownBlockedByEntity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPalletPulldownBlockerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::ClassParams = {
		&UPalletPulldownBlockerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPalletPulldownBlockerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPalletPulldownBlockerComponent, 108984376);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPalletPulldownBlockerComponent>()
	{
		return UPalletPulldownBlockerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPalletPulldownBlockerComponent(Z_Construct_UClass_UPalletPulldownBlockerComponent, &UPalletPulldownBlockerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPalletPulldownBlockerComponent"), false, nullptr, nullptr, nullptr);

	void UPalletPulldownBlockerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isPalletPulldownBlockedByEntity(TEXT("_isPalletPulldownBlockedByEntity"));

		const bool bIsValid = true
			&& Name__isPalletPulldownBlockedByEntity == ClassReps[(int32)ENetFields_Private::_isPalletPulldownBlockedByEntity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPalletPulldownBlockerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPalletPulldownBlockerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
