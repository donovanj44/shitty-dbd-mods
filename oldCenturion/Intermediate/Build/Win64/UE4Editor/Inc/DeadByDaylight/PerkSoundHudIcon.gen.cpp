// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkSoundHudIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkSoundHudIcon() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSoundHudIcon_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSoundHudIcon();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UPerkSoundHudIcon::execActivatePerk)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePerk(Z_Param_percentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkSoundHudIcon::execClearPerk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPerk();
		P_NATIVE_END;
	}
	void UPerkSoundHudIcon::StaticRegisterNativesUPerkSoundHudIcon()
	{
		UClass* Class = UPerkSoundHudIcon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePerk", &UPerkSoundHudIcon::execActivatePerk },
			{ "ClearPerk", &UPerkSoundHudIcon::execClearPerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics
	{
		struct PerkSoundHudIcon_eventActivatePerk_Parms
		{
			float percentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkSoundHudIcon_eventActivatePerk_Parms, percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkSoundHudIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkSoundHudIcon, nullptr, "ActivatePerk", nullptr, nullptr, sizeof(PerkSoundHudIcon_eventActivatePerk_Parms), Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkSoundHudIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkSoundHudIcon, nullptr, "ClearPerk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkSoundHudIcon_NoRegister()
	{
		return UPerkSoundHudIcon::StaticClass();
	}
	struct Z_Construct_UClass_UPerkSoundHudIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkSoundHudIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkSoundHudIcon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkSoundHudIcon_ActivatePerk, "ActivatePerk" }, // 2891797461
		{ &Z_Construct_UFunction_UPerkSoundHudIcon_ClearPerk, "ClearPerk" }, // 993632415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkSoundHudIcon.h" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIcon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIcon_Statics::NewProp_PerkID_MetaData[] = {
		{ "Category", "PerkSoundHudIcon" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPerkSoundHudIcon_Statics::NewProp_PerkID = { "PerkID", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSoundHudIcon, PerkID), METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIcon_Statics::NewProp_PerkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIcon_Statics::NewProp_PerkID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkSoundHudIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudIcon_Statics::NewProp_PerkID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkSoundHudIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkSoundHudIcon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkSoundHudIcon_Statics::ClassParams = {
		&UPerkSoundHudIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerkSoundHudIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIcon_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkSoundHudIcon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkSoundHudIcon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkSoundHudIcon, 607906692);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkSoundHudIcon>()
	{
		return UPerkSoundHudIcon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkSoundHudIcon(Z_Construct_UClass_UPerkSoundHudIcon, &UPerkSoundHudIcon::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkSoundHudIcon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkSoundHudIcon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
