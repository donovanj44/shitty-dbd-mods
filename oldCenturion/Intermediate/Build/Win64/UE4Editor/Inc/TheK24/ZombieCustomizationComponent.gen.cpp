// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieCustomizationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieCustomizationComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieCustomizationComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieCustomizationComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizedSkeletalMesh();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZombieCustomizationComponent::execMulticast_SetZombieCustomization)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetZombieCustomization_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	static FName NAME_UZombieCustomizationComponent_Multicast_SetZombieCustomization = FName(TEXT("Multicast_SetZombieCustomization"));
	void UZombieCustomizationComponent::Multicast_SetZombieCustomization(ACamperPlayer* survivor)
	{
		ZombieCustomizationComponent_eventMulticast_SetZombieCustomization_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UZombieCustomizationComponent_Multicast_SetZombieCustomization),&Parms);
	}
	void UZombieCustomizationComponent::StaticRegisterNativesUZombieCustomizationComponent()
	{
		UClass* Class = UZombieCustomizationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetZombieCustomization", &UZombieCustomizationComponent::execMulticast_SetZombieCustomization },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCustomizationComponent_eventMulticast_SetZombieCustomization_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCustomizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZombieCustomizationComponent, nullptr, "Multicast_SetZombieCustomization", nullptr, nullptr, sizeof(ZombieCustomizationComponent_eventMulticast_SetZombieCustomization_Parms), Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZombieCustomizationComponent_NoRegister()
	{
		return UZombieCustomizationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZombieCustomizationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__survivorSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieCustomizationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizedSkeletalMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZombieCustomizationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZombieCustomizationComponent_Multicast_SetZombieCustomization, "Multicast_SetZombieCustomization" }, // 1644362478
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieCustomizationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieCustomizationComponent.h" },
		{ "ModuleRelativePath", "Public/ZombieCustomizationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieCustomizationComponent_Statics::NewProp__survivorSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieCustomizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UZombieCustomizationComponent_Statics::NewProp__survivorSource = { "_survivorSource", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieCustomizationComponent, _survivorSource), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZombieCustomizationComponent_Statics::NewProp__survivorSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieCustomizationComponent_Statics::NewProp__survivorSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieCustomizationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieCustomizationComponent_Statics::NewProp__survivorSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieCustomizationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieCustomizationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieCustomizationComponent_Statics::ClassParams = {
		&UZombieCustomizationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZombieCustomizationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombieCustomizationComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieCustomizationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieCustomizationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieCustomizationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieCustomizationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieCustomizationComponent, 3269281679);
	template<> THEK24_API UClass* StaticClass<UZombieCustomizationComponent>()
	{
		return UZombieCustomizationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieCustomizationComponent(Z_Construct_UClass_UZombieCustomizationComponent, &UZombieCustomizationComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieCustomizationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieCustomizationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
