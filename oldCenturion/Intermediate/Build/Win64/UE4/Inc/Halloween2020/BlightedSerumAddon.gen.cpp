// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halloween2020/Public/BlightedSerumAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightedSerumAddon() {}
// Cross Module References
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumAddon_NoRegister();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_Halloween2020();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumDashInteraction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlightedSerumAddon::execOnRep_DashInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DashInteraction();
		P_NATIVE_END;
	}
	static FName NAME_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx = FName(TEXT("OnBlightedDashEnabledVfxSfx"));
	void UBlightedSerumAddon::OnBlightedDashEnabledVfxSfx()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx),NULL);
	}
	void UBlightedSerumAddon::StaticRegisterNativesUBlightedSerumAddon()
	{
		UClass* Class = UBlightedSerumAddon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_DashInteraction", &UBlightedSerumAddon::execOnRep_DashInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightedSerumAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightedSerumAddon, nullptr, "OnBlightedDashEnabledVfxSfx", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightedSerumAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightedSerumAddon, nullptr, "OnRep_DashInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlightedSerumAddon_NoRegister()
	{
		return UBlightedSerumAddon::StaticClass();
	}
	struct Z_Construct_UClass_UBlightedSerumAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfDashesPerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfDashesPerEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__theBlightExtraTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__theBlightExtraTokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dashInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dashInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightedSerumCollectable_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__blightedSerumCollectable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightedSerumAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_Halloween2020,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlightedSerumAddon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx, "OnBlightedDashEnabledVfxSfx" }, // 2153231620
		{ &Z_Construct_UFunction_UBlightedSerumAddon_OnRep_DashInteraction, "OnRep_DashInteraction" }, // 2777315932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightedSerumAddon.h" },
		{ "ModuleRelativePath", "Public/BlightedSerumAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__numberOfDashesPerEvent_MetaData[] = {
		{ "Category", "BlightedSerumAddon" },
		{ "ModuleRelativePath", "Public/BlightedSerumAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__numberOfDashesPerEvent = { "_numberOfDashesPerEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumAddon, _numberOfDashesPerEvent), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__numberOfDashesPerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__numberOfDashesPerEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__theBlightExtraTokens_MetaData[] = {
		{ "Category", "BlightedSerumAddon" },
		{ "ModuleRelativePath", "Public/BlightedSerumAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__theBlightExtraTokens = { "_theBlightExtraTokens", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumAddon, _theBlightExtraTokens), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__theBlightExtraTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__theBlightExtraTokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__dashInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightedSerumAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__dashInteraction = { "_dashInteraction", "OnRep_DashInteraction", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumAddon, _dashInteraction), Z_Construct_UClass_UBlightedSerumDashInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__dashInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__dashInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__blightedSerumCollectable_MetaData[] = {
		{ "Category", "BlightedSerumAddon" },
		{ "ModuleRelativePath", "Public/BlightedSerumAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__blightedSerumCollectable = { "_blightedSerumCollectable", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumAddon, _blightedSerumCollectable), Z_Construct_UClass_ACollectable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__blightedSerumCollectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__blightedSerumCollectable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightedSerumAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__numberOfDashesPerEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__theBlightExtraTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__dashInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumAddon_Statics::NewProp__blightedSerumCollectable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightedSerumAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightedSerumAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightedSerumAddon_Statics::ClassParams = {
		&UBlightedSerumAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlightedSerumAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumAddon_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightedSerumAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightedSerumAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightedSerumAddon, 3204698971);
	template<> HALLOWEEN2020_API UClass* StaticClass<UBlightedSerumAddon>()
	{
		return UBlightedSerumAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightedSerumAddon(Z_Construct_UClass_UBlightedSerumAddon, &UBlightedSerumAddon::StaticClass, TEXT("/Script/Halloween2020"), TEXT("UBlightedSerumAddon"), false, nullptr, nullptr, nullptr);

	void UBlightedSerumAddon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__dashInteraction(TEXT("_dashInteraction"));

		const bool bIsValid = true
			&& Name__dashInteraction == ClassReps[(int32)ENetFields_Private::_dashInteraction].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBlightedSerumAddon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightedSerumAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
