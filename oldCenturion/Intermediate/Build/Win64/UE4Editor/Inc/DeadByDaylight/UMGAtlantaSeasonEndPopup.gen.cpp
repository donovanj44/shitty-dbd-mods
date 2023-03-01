// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaSeasonEndPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaSeasonEndPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaSeasonEndPopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankBanner_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaSeasonEndPopup::execPlayNewRankFadeInAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNewRankFadeInAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSeasonEndPopup::execTriggerFadeOutAnimationTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerFadeOutAnimationTimer();
		P_NATIVE_END;
	}
	void UUMGAtlantaSeasonEndPopup::StaticRegisterNativesUUMGAtlantaSeasonEndPopup()
	{
		UClass* Class = UUMGAtlantaSeasonEndPopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayNewRankFadeInAnimation", &UUMGAtlantaSeasonEndPopup::execPlayNewRankFadeInAnimation },
			{ "TriggerFadeOutAnimationTimer", &UUMGAtlantaSeasonEndPopup::execTriggerFadeOutAnimationTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSeasonEndPopup, nullptr, "PlayNewRankFadeInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSeasonEndPopup, nullptr, "TriggerFadeOutAnimationTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_NoRegister()
	{
		return UUMGAtlantaSeasonEndPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerBeforeFadeOutAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timerBeforeFadeOutAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeOutTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fadeOutTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldRankHorizontalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldRankHorizontalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRankHorizontalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRankHorizontalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewKillerRankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewKillerRankBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldKillerRankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldKillerRankBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSurvivorRankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSurvivorRankBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldSurvivorRankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldSurvivorRankBanner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_PlayNewRankFadeInAnimation, "PlayNewRankFadeInAnimation" }, // 2915466135
		{ &Z_Construct_UFunction_UUMGAtlantaSeasonEndPopup_TriggerFadeOutAnimationTimer, "TriggerFadeOutAnimationTimer" }, // 2062092250
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaSeasonEndPopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__timerBeforeFadeOutAnimation_MetaData[] = {
		{ "Category", "UMGAtlantaSeasonEndPopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__timerBeforeFadeOutAnimation = { "_timerBeforeFadeOutAnimation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, _timerBeforeFadeOutAnimation), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__timerBeforeFadeOutAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__timerBeforeFadeOutAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__fadeOutTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__fadeOutTimerHandle = { "_fadeOutTimerHandle", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, _fadeOutTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__fadeOutTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__fadeOutTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldRankHorizontalBox_MetaData[] = {
		{ "Category", "UMGAtlantaSeasonEndPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldRankHorizontalBox = { "OldRankHorizontalBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, OldRankHorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldRankHorizontalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldRankHorizontalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewRankHorizontalBox_MetaData[] = {
		{ "Category", "UMGAtlantaSeasonEndPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewRankHorizontalBox = { "NewRankHorizontalBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, NewRankHorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewRankHorizontalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewRankHorizontalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewKillerRankBanner_MetaData[] = {
		{ "Category", "UMGAtlantaSeasonEndPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewKillerRankBanner = { "NewKillerRankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, NewKillerRankBanner), Z_Construct_UClass_UUMGTallyRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewKillerRankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewKillerRankBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldKillerRankBanner_MetaData[] = {
		{ "Category", "UMGAtlantaSeasonEndPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldKillerRankBanner = { "OldKillerRankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, OldKillerRankBanner), Z_Construct_UClass_UUMGTallyRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldKillerRankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldKillerRankBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewSurvivorRankBanner_MetaData[] = {
		{ "Category", "UMGAtlantaSeasonEndPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewSurvivorRankBanner = { "NewSurvivorRankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, NewSurvivorRankBanner), Z_Construct_UClass_UUMGTallyRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewSurvivorRankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewSurvivorRankBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldSurvivorRankBanner_MetaData[] = {
		{ "Category", "UMGAtlantaSeasonEndPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSeasonEndPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldSurvivorRankBanner = { "OldSurvivorRankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSeasonEndPopup, OldSurvivorRankBanner), Z_Construct_UClass_UUMGTallyRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldSurvivorRankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldSurvivorRankBanner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__timerBeforeFadeOutAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp__fadeOutTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldRankHorizontalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewRankHorizontalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewKillerRankBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldKillerRankBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_NewSurvivorRankBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::NewProp_OldSurvivorRankBanner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaSeasonEndPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::ClassParams = {
		&UUMGAtlantaSeasonEndPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaSeasonEndPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaSeasonEndPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaSeasonEndPopup, 4282111990);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaSeasonEndPopup>()
	{
		return UUMGAtlantaSeasonEndPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaSeasonEndPopup(Z_Construct_UClass_UUMGAtlantaSeasonEndPopup, &UUMGAtlantaSeasonEndPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaSeasonEndPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaSeasonEndPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
