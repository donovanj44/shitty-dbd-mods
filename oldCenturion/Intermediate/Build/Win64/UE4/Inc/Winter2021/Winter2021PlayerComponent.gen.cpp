// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/Winter2021PlayerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinter2021PlayerComponent() {}
// Cross Module References
	WINTER2021_API UClass* Z_Construct_UClass_UWinter2021PlayerComponent_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_UWinter2021PlayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
// End Cross Module References
	DEFINE_FUNCTION(UWinter2021PlayerComponent::execClient_UnlockCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_UnlockCosmetic_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UWinter2021PlayerComponent_Client_UnlockCosmetic = FName(TEXT("Client_UnlockCosmetic"));
	void UWinter2021PlayerComponent::Client_UnlockCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWinter2021PlayerComponent_Client_UnlockCosmetic),NULL);
	}
	void UWinter2021PlayerComponent::StaticRegisterNativesUWinter2021PlayerComponent()
	{
		UClass* Class = UWinter2021PlayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_UnlockCosmetic", &UWinter2021PlayerComponent::execClient_UnlockCosmetic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Winter2021PlayerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinter2021PlayerComponent, nullptr, "Client_UnlockCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWinter2021PlayerComponent_NoRegister()
	{
		return UWinter2021PlayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWinter2021PlayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasAllCosmeticRewards_MetaData[];
#endif
		static void NewProp__hasAllCosmeticRewards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasAllCosmeticRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasSentUnlockCosmeticRequest_MetaData[];
#endif
		static void NewProp__hasSentUnlockCosmeticRequest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasSentUnlockCosmeticRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasCosmeticUnlockRequirementBeenSatisfied_MetaData[];
#endif
		static void NewProp__hasCosmeticUnlockRequirementBeenSatisfied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasCosmeticUnlockRequirementBeenSatisfied;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWinter2021PlayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWinter2021PlayerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWinter2021PlayerComponent_Client_UnlockCosmetic, "Client_UnlockCosmetic" }, // 1311036454
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021PlayerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Winter2021PlayerComponent.h" },
		{ "ModuleRelativePath", "Public/Winter2021PlayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasAllCosmeticRewards_MetaData[] = {
		{ "ModuleRelativePath", "Public/Winter2021PlayerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasAllCosmeticRewards_SetBit(void* Obj)
	{
		((UWinter2021PlayerComponent*)Obj)->_hasAllCosmeticRewards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasAllCosmeticRewards = { "_hasAllCosmeticRewards", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWinter2021PlayerComponent), &Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasAllCosmeticRewards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasAllCosmeticRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasAllCosmeticRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasSentUnlockCosmeticRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Winter2021PlayerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasSentUnlockCosmeticRequest_SetBit(void* Obj)
	{
		((UWinter2021PlayerComponent*)Obj)->_hasSentUnlockCosmeticRequest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasSentUnlockCosmeticRequest = { "_hasSentUnlockCosmeticRequest", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWinter2021PlayerComponent), &Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasSentUnlockCosmeticRequest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasSentUnlockCosmeticRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasSentUnlockCosmeticRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasCosmeticUnlockRequirementBeenSatisfied_MetaData[] = {
		{ "ModuleRelativePath", "Public/Winter2021PlayerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasCosmeticUnlockRequirementBeenSatisfied_SetBit(void* Obj)
	{
		((UWinter2021PlayerComponent*)Obj)->_hasCosmeticUnlockRequirementBeenSatisfied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasCosmeticUnlockRequirementBeenSatisfied = { "_hasCosmeticUnlockRequirementBeenSatisfied", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWinter2021PlayerComponent), &Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasCosmeticUnlockRequirementBeenSatisfied_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasCosmeticUnlockRequirementBeenSatisfied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasCosmeticUnlockRequirementBeenSatisfied_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWinter2021PlayerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasAllCosmeticRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasSentUnlockCosmeticRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinter2021PlayerComponent_Statics::NewProp__hasCosmeticUnlockRequirementBeenSatisfied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWinter2021PlayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinter2021PlayerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWinter2021PlayerComponent_Statics::ClassParams = {
		&UWinter2021PlayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWinter2021PlayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWinter2021PlayerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWinter2021PlayerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWinter2021PlayerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWinter2021PlayerComponent, 1243772647);
	template<> WINTER2021_API UClass* StaticClass<UWinter2021PlayerComponent>()
	{
		return UWinter2021PlayerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWinter2021PlayerComponent(Z_Construct_UClass_UWinter2021PlayerComponent, &UWinter2021PlayerComponent::StaticClass, TEXT("/Script/Winter2021"), TEXT("UWinter2021PlayerComponent"), false, nullptr, nullptr, nullptr);

	void UWinter2021PlayerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__hasCosmeticUnlockRequirementBeenSatisfied(TEXT("_hasCosmeticUnlockRequirementBeenSatisfied"));
		static const FName Name__hasSentUnlockCosmeticRequest(TEXT("_hasSentUnlockCosmeticRequest"));
		static const FName Name__hasAllCosmeticRewards(TEXT("_hasAllCosmeticRewards"));

		const bool bIsValid = true
			&& Name__hasCosmeticUnlockRequirementBeenSatisfied == ClassReps[(int32)ENetFields_Private::_hasCosmeticUnlockRequirementBeenSatisfied].Property->GetFName()
			&& Name__hasSentUnlockCosmeticRequest == ClassReps[(int32)ENetFields_Private::_hasSentUnlockCosmeticRequest].Property->GetFName()
			&& Name__hasAllCosmeticRewards == ClassReps[(int32)ENetFields_Private::_hasAllCosmeticRewards].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWinter2021PlayerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWinter2021PlayerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
