// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaHudPowerAttackJoystick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaHudPowerAttackJoystick() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudPowerAttackJoystick();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaHudPowerAttackJoystick::execOnFinishedAvailableAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedAvailableAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaHudPowerAttackJoystick::execOnFinishedTutorialAnimationIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedTutorialAnimationIn();
		P_NATIVE_END;
	}
	void UAtlantaHudPowerAttackJoystick::StaticRegisterNativesUAtlantaHudPowerAttackJoystick()
	{
		UClass* Class = UAtlantaHudPowerAttackJoystick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFinishedAvailableAnimation", &UAtlantaHudPowerAttackJoystick::execOnFinishedAvailableAnimation },
			{ "OnFinishedTutorialAnimationIn", &UAtlantaHudPowerAttackJoystick::execOnFinishedTutorialAnimationIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaHudPowerAttackJoystick, nullptr, "OnFinishedAvailableAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaHudPowerAttackJoystick, nullptr, "OnFinishedTutorialAnimationIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_NoRegister()
	{
		return UAtlantaHudPowerAttackJoystick::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutoLoopAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__tutoLoopAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutoStartAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__tutoStartAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fadeOutAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__fadeOutAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__availableAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedAvailableAnimation, "OnFinishedAvailableAnimation" }, // 2804790294
		{ &Z_Construct_UFunction_UAtlantaHudPowerAttackJoystick_OnFinishedTutorialAnimationIn, "OnFinishedTutorialAnimationIn" }, // 2206650729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaHudPowerAttackJoystick.h" },
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "AtlantaHudPowerAttackJoystick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudPowerAttackJoystick, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoLoopAnimationName_MetaData[] = {
		{ "Category", "AtlantaHudPowerAttackJoystick" },
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoLoopAnimationName = { "_tutoLoopAnimationName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudPowerAttackJoystick, _tutoLoopAnimationName), METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoLoopAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoLoopAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoStartAnimationName_MetaData[] = {
		{ "Category", "AtlantaHudPowerAttackJoystick" },
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoStartAnimationName = { "_tutoStartAnimationName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudPowerAttackJoystick, _tutoStartAnimationName), METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoStartAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoStartAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__fadeOutAnimationName_MetaData[] = {
		{ "Category", "AtlantaHudPowerAttackJoystick" },
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__fadeOutAnimationName = { "_fadeOutAnimationName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudPowerAttackJoystick, _fadeOutAnimationName), METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__fadeOutAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__fadeOutAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__availableAnimationName_MetaData[] = {
		{ "Category", "AtlantaHudPowerAttackJoystick" },
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__availableAnimationName = { "_availableAnimationName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudPowerAttackJoystick, _availableAnimationName), METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__availableAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__availableAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_AnimationContainer_MetaData[] = {
		{ "Category", "AtlantaHudPowerAttackJoystick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudPowerAttackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_AnimationContainer = { "AnimationContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudPowerAttackJoystick, AnimationContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_AnimationContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_AnimationContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoLoopAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__tutoStartAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__fadeOutAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp__availableAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::NewProp_AnimationContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaHudPowerAttackJoystick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::ClassParams = {
		&UAtlantaHudPowerAttackJoystick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaHudPowerAttackJoystick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaHudPowerAttackJoystick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaHudPowerAttackJoystick, 2148174492);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaHudPowerAttackJoystick>()
	{
		return UAtlantaHudPowerAttackJoystick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaHudPowerAttackJoystick(Z_Construct_UClass_UAtlantaHudPowerAttackJoystick, &UAtlantaHudPowerAttackJoystick::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaHudPowerAttackJoystick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaHudPowerAttackJoystick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
