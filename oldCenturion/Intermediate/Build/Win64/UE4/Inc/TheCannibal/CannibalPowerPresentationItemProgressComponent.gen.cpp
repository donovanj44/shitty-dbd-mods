// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalPowerPresentationItemProgressComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalPowerPresentationItemProgressComponent() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationItemProgressComponent();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawPowerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCannibalPowerPresentationItemProgressComponent::execSetCannibalChainsawPowerComponent)
	{
		P_GET_OBJECT(UCannibalChainsawPowerComponent,Z_Param_cannibalPowerChainsawComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCannibalChainsawPowerComponent(Z_Param_cannibalPowerChainsawComponent);
		P_NATIVE_END;
	}
	void UCannibalPowerPresentationItemProgressComponent::StaticRegisterNativesUCannibalPowerPresentationItemProgressComponent()
	{
		UClass* Class = UCannibalPowerPresentationItemProgressComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCannibalChainsawPowerComponent", &UCannibalPowerPresentationItemProgressComponent::execSetCannibalChainsawPowerComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics
	{
		struct CannibalPowerPresentationItemProgressComponent_eventSetCannibalChainsawPowerComponent_Parms
		{
			UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cannibalPowerChainsawComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cannibalPowerChainsawComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::NewProp_cannibalPowerChainsawComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::NewProp_cannibalPowerChainsawComponent = { "cannibalPowerChainsawComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannibalPowerPresentationItemProgressComponent_eventSetCannibalChainsawPowerComponent_Parms, cannibalPowerChainsawComponent), Z_Construct_UClass_UCannibalChainsawPowerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::NewProp_cannibalPowerChainsawComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::NewProp_cannibalPowerChainsawComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::NewProp_cannibalPowerChainsawComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalPowerPresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent, nullptr, "SetCannibalChainsawPowerComponent", nullptr, nullptr, sizeof(CannibalPowerPresentationItemProgressComponent_eventSetCannibalChainsawPowerComponent_Parms), Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_NoRegister()
	{
		return UCannibalPowerPresentationItemProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cannibalPowerChainsawComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cannibalPowerChainsawComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationItemProgressComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent, "SetCannibalChainsawPowerComponent" }, // 539472424
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CannibalPowerPresentationItemProgressComponent.h" },
		{ "ModuleRelativePath", "Public/CannibalPowerPresentationItemProgressComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::NewProp__cannibalPowerChainsawComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CannibalPowerPresentationItemProgressComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CannibalPowerPresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::NewProp__cannibalPowerChainsawComponent = { "_cannibalPowerChainsawComponent", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalPowerPresentationItemProgressComponent, _cannibalPowerChainsawComponent), Z_Construct_UClass_UCannibalChainsawPowerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::NewProp__cannibalPowerChainsawComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::NewProp__cannibalPowerChainsawComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::NewProp__cannibalPowerChainsawComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCannibalPowerPresentationItemProgressComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::ClassParams = {
		&UCannibalPowerPresentationItemProgressComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCannibalPowerPresentationItemProgressComponent, 4076622357);
	template<> THECANNIBAL_API UClass* StaticClass<UCannibalPowerPresentationItemProgressComponent>()
	{
		return UCannibalPowerPresentationItemProgressComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCannibalPowerPresentationItemProgressComponent(Z_Construct_UClass_UCannibalPowerPresentationItemProgressComponent, &UCannibalPowerPresentationItemProgressComponent::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCannibalPowerPresentationItemProgressComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCannibalPowerPresentationItemProgressComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
