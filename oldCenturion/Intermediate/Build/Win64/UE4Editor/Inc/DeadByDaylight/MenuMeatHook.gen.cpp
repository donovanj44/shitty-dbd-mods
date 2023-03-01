// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MenuMeatHook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuMeatHook() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMenuMeatHook_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMenuMeatHook();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharmSpawnerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStandDisplayable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharmAttachable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMenuMeatHook::execBeginDestroySequence_Internal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroySequence_Internal_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMenuMeatHook_BeginDestroySequence_Internal = FName(TEXT("BeginDestroySequence_Internal"));
	void AMenuMeatHook::BeginDestroySequence_Internal()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMenuMeatHook_BeginDestroySequence_Internal),NULL);
	}
	static FName NAME_AMenuMeatHook_OnCharmsUpdated = FName(TEXT("OnCharmsUpdated"));
	void AMenuMeatHook::OnCharmsUpdated(TArray<FCharmIdSlot> const& charmIDs)
	{
		MenuMeatHook_eventOnCharmsUpdated_Parms Parms;
		Parms.charmIDs=charmIDs;
		ProcessEvent(FindFunctionChecked(NAME_AMenuMeatHook_OnCharmsUpdated),&Parms);
	}
	void AMenuMeatHook::StaticRegisterNativesAMenuMeatHook()
	{
		UClass* Class = AMenuMeatHook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDestroySequence_Internal", &AMenuMeatHook::execBeginDestroySequence_Internal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuMeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuMeatHook, nullptr, "BeginDestroySequence_Internal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_charmIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_charmIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_charmIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::NewProp_charmIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::NewProp_charmIDs = { "charmIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuMeatHook_eventOnCharmsUpdated_Parms, charmIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::NewProp_charmIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::NewProp_charmIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::NewProp_charmIDs_Inner = { "charmIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::NewProp_charmIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::NewProp_charmIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuMeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuMeatHook, nullptr, "OnCharmsUpdated", nullptr, nullptr, sizeof(MenuMeatHook_eventOnCharmsUpdated_Parms), Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMenuMeatHook_NoRegister()
	{
		return AMenuMeatHook::StaticClass();
	}
	struct Z_Construct_UClass_AMenuMeatHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charmSpawnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__charmSpawnerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuMeatHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMenuMeatHook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMenuMeatHook_BeginDestroySequence_Internal, "BeginDestroySequence_Internal" }, // 591340576
		{ &Z_Construct_UFunction_AMenuMeatHook_OnCharmsUpdated, "OnCharmsUpdated" }, // 3616412415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuMeatHook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MenuMeatHook.h" },
		{ "ModuleRelativePath", "Public/MenuMeatHook.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuMeatHook_Statics::NewProp__charmSpawnerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MenuMeatHook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MenuMeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMenuMeatHook_Statics::NewProp__charmSpawnerComponent = { "_charmSpawnerComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMenuMeatHook, _charmSpawnerComponent), Z_Construct_UClass_UCharmSpawnerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMenuMeatHook_Statics::NewProp__charmSpawnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuMeatHook_Statics::NewProp__charmSpawnerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMenuMeatHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMenuMeatHook_Statics::NewProp__charmSpawnerComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMenuMeatHook_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStandDisplayable_NoRegister, (int32)VTABLE_OFFSET(AMenuMeatHook, IStandDisplayable), false },
			{ Z_Construct_UClass_UCharmAttachable_NoRegister, (int32)VTABLE_OFFSET(AMenuMeatHook, ICharmAttachable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuMeatHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuMeatHook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMenuMeatHook_Statics::ClassParams = {
		&AMenuMeatHook::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMenuMeatHook_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMenuMeatHook_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMenuMeatHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuMeatHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuMeatHook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMenuMeatHook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMenuMeatHook, 1473787733);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AMenuMeatHook>()
	{
		return AMenuMeatHook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuMeatHook(Z_Construct_UClass_AMenuMeatHook, &AMenuMeatHook::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AMenuMeatHook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuMeatHook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
