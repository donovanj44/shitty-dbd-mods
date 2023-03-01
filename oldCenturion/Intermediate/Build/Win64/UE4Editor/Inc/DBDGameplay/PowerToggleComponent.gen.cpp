// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PowerToggleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerToggleComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerToggleComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerToggleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	DEFINE_FUNCTION(UPowerToggleComponent::execOnRep_IsInPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsInPower();
		P_NATIVE_END;
	}
	void UPowerToggleComponent::StaticRegisterNativesUPowerToggleComponent()
	{
		UClass* Class = UPowerToggleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsInPower", &UPowerToggleComponent::execOnRep_IsInPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerToggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerToggleComponent, nullptr, "OnRep_IsInPower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPowerToggleComponent_NoRegister()
	{
		return UPowerToggleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPowerToggleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInPower_MetaData[];
#endif
		static void NewProp__isInPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerToggleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPowerToggleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerToggleComponent_OnRep_IsInPower, "OnRep_IsInPower" }, // 3296598541
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerToggleComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerToggleComponent.h" },
		{ "ModuleRelativePath", "Public/PowerToggleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerToggleComponent_Statics::NewProp__isInPower_MetaData[] = {
		{ "ModuleRelativePath", "Public/PowerToggleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPowerToggleComponent_Statics::NewProp__isInPower_SetBit(void* Obj)
	{
		((UPowerToggleComponent*)Obj)->_isInPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPowerToggleComponent_Statics::NewProp__isInPower = { "_isInPower", "OnRep_IsInPower", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPowerToggleComponent), &Z_Construct_UClass_UPowerToggleComponent_Statics::NewProp__isInPower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPowerToggleComponent_Statics::NewProp__isInPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerToggleComponent_Statics::NewProp__isInPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerToggleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerToggleComponent_Statics::NewProp__isInPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerToggleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerToggleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerToggleComponent_Statics::ClassParams = {
		&UPowerToggleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPowerToggleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerToggleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerToggleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerToggleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerToggleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerToggleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerToggleComponent, 2703357016);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPowerToggleComponent>()
	{
		return UPowerToggleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerToggleComponent(Z_Construct_UClass_UPowerToggleComponent, &UPowerToggleComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPowerToggleComponent"), false, nullptr, nullptr, nullptr);

	void UPowerToggleComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInPower(TEXT("_isInPower"));

		const bool bIsValid = true
			&& Name__isInPower == ClassReps[(int32)ENetFields_Private::_isInPower].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPowerToggleComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerToggleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
