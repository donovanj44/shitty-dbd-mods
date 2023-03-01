// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomizedAnimationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizedAnimationComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizedAnimationComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizedAnimationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizedSkeletalMesh_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBasePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizedAnimationComponent::execOnCustomizationChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomizationChanged();
		P_NATIVE_END;
	}
	void UCustomizedAnimationComponent::StaticRegisterNativesUCustomizedAnimationComponent()
	{
		UClass* Class = UCustomizedAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCustomizationChanged", &UCustomizedAnimationComponent::execOnCustomizationChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizedAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizedAnimationComponent, nullptr, "OnCustomizationChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomizedAnimationComponent_NoRegister()
	{
		return UCustomizedAnimationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizedAnimationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultAnimClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__defaultAnimClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizedSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customizedSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizedAnimationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizedAnimationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizedAnimationComponent_OnCustomizationChanged, "OnCustomizationChanged" }, // 3819009287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizedAnimationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomizedAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/CustomizedAnimationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__defaultAnimClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizedAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__defaultAnimClass = { "_defaultAnimClass", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizedAnimationComponent, _defaultAnimClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__defaultAnimClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__defaultAnimClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__customizedSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizedAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__customizedSkeletalMesh = { "_customizedSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizedAnimationComponent, _customizedSkeletalMesh), Z_Construct_UClass_UCustomizedSkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__customizedSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__customizedSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizedAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__owner = { "_owner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizedAnimationComponent, _owner), Z_Construct_UClass_ADBDBasePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizedAnimationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__defaultAnimClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__customizedSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizedAnimationComponent_Statics::NewProp__owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizedAnimationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizedAnimationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizedAnimationComponent_Statics::ClassParams = {
		&UCustomizedAnimationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizedAnimationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizedAnimationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizedAnimationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizedAnimationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizedAnimationComponent, 2012526668);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCustomizedAnimationComponent>()
	{
		return UCustomizedAnimationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizedAnimationComponent(Z_Construct_UClass_UCustomizedAnimationComponent, &UCustomizedAnimationComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCustomizedAnimationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizedAnimationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
