// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VaultableOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaultableOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVaultableOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVaultableOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UVaultableOutlineUpdateStrategy::execSetCanBeRevealedToLocalPlayer)
	{
		P_GET_UBOOL(Z_Param_canBeRevealedToLocalPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanBeRevealedToLocalPlayer(Z_Param_canBeRevealedToLocalPlayer);
		P_NATIVE_END;
	}
	void UVaultableOutlineUpdateStrategy::StaticRegisterNativesUVaultableOutlineUpdateStrategy()
	{
		UClass* Class = UVaultableOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCanBeRevealedToLocalPlayer", &UVaultableOutlineUpdateStrategy::execSetCanBeRevealedToLocalPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics
	{
		struct VaultableOutlineUpdateStrategy_eventSetCanBeRevealedToLocalPlayer_Parms
		{
			bool canBeRevealedToLocalPlayer;
		};
		static void NewProp_canBeRevealedToLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canBeRevealedToLocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::NewProp_canBeRevealedToLocalPlayer_SetBit(void* Obj)
	{
		((VaultableOutlineUpdateStrategy_eventSetCanBeRevealedToLocalPlayer_Parms*)Obj)->canBeRevealedToLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::NewProp_canBeRevealedToLocalPlayer = { "canBeRevealedToLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaultableOutlineUpdateStrategy_eventSetCanBeRevealedToLocalPlayer_Parms), &Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::NewProp_canBeRevealedToLocalPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::NewProp_canBeRevealedToLocalPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaultableOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaultableOutlineUpdateStrategy, nullptr, "SetCanBeRevealedToLocalPlayer", nullptr, nullptr, sizeof(VaultableOutlineUpdateStrategy_eventSetCanBeRevealedToLocalPlayer_Parms), Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaultableOutlineUpdateStrategy_NoRegister()
	{
		return UVaultableOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canBeRevealedToLocalPlayer_MetaData[];
#endif
		static void NewProp__canBeRevealedToLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canBeRevealedToLocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer, "SetCanBeRevealedToLocalPlayer" }, // 1390052884
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaultableOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/VaultableOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::NewProp__canBeRevealedToLocalPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VaultableOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/VaultableOutlineUpdateStrategy.h" },
	};
#endif
	void Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::NewProp__canBeRevealedToLocalPlayer_SetBit(void* Obj)
	{
		((UVaultableOutlineUpdateStrategy*)Obj)->_canBeRevealedToLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::NewProp__canBeRevealedToLocalPlayer = { "_canBeRevealedToLocalPlayer", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaultableOutlineUpdateStrategy), &Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::NewProp__canBeRevealedToLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::NewProp__canBeRevealedToLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::NewProp__canBeRevealedToLocalPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::NewProp__canBeRevealedToLocalPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaultableOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::ClassParams = {
		&UVaultableOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaultableOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaultableOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaultableOutlineUpdateStrategy, 720640360);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UVaultableOutlineUpdateStrategy>()
	{
		return UVaultableOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaultableOutlineUpdateStrategy(Z_Construct_UClass_UVaultableOutlineUpdateStrategy, &UVaultableOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UVaultableOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaultableOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
