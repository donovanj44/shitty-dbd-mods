// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/K22PowerChargePresentationItemProgressComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK22PowerChargePresentationItemProgressComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationItemProgressComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK22PowerChargePresentationItemProgressComponent::execOnTwinSet)
	{
		P_GET_OBJECT(AConjoinedTwin,Z_Param_twin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTwinSet(Z_Param_twin);
		P_NATIVE_END;
	}
	void UK22PowerChargePresentationItemProgressComponent::StaticRegisterNativesUK22PowerChargePresentationItemProgressComponent()
	{
		UClass* Class = UK22PowerChargePresentationItemProgressComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTwinSet", &UK22PowerChargePresentationItemProgressComponent::execOnTwinSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics
	{
		struct K22PowerChargePresentationItemProgressComponent_eventOnTwinSet_Parms
		{
			AConjoinedTwin* twin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K22PowerChargePresentationItemProgressComponent_eventOnTwinSet_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K22PowerChargePresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent, nullptr, "OnTwinSet", nullptr, nullptr, sizeof(K22PowerChargePresentationItemProgressComponent_eventOnTwinSet_Parms), Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_NoRegister()
	{
		return UK22PowerChargePresentationItemProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerChargeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__powerChargeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationItemProgressComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK22PowerChargePresentationItemProgressComponent_OnTwinSet, "OnTwinSet" }, // 1393588257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K22PowerChargePresentationItemProgressComponent.h" },
		{ "ModuleRelativePath", "Public/K22PowerChargePresentationItemProgressComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "K22PowerChargePresentationItemProgressComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K22PowerChargePresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent = { "_powerChargeComponent", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK22PowerChargePresentationItemProgressComponent, _powerChargeComponent), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::NewProp__powerChargeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK22PowerChargePresentationItemProgressComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::ClassParams = {
		&UK22PowerChargePresentationItemProgressComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK22PowerChargePresentationItemProgressComponent, 1446124830);
	template<> THETWINS_API UClass* StaticClass<UK22PowerChargePresentationItemProgressComponent>()
	{
		return UK22PowerChargePresentationItemProgressComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK22PowerChargePresentationItemProgressComponent(Z_Construct_UClass_UK22PowerChargePresentationItemProgressComponent, &UK22PowerChargePresentationItemProgressComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UK22PowerChargePresentationItemProgressComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK22PowerChargePresentationItemProgressComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
