// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PalletTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePalletTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APalletTracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APalletTracker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APallet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APalletTracker::execCanSpawnDreamPalletAtLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSpawnDreamPalletAtLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APalletTracker::execInitializeTunableValues)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTunableValues(Z_Param_slasher);
		P_NATIVE_END;
	}
	static FName NAME_APalletTracker_EnableSelectedEffectToLocalPlayer = FName(TEXT("EnableSelectedEffectToLocalPlayer"));
	void APalletTracker::EnableSelectedEffectToLocalPlayer(bool activated)
	{
		PalletTracker_eventEnableSelectedEffectToLocalPlayer_Parms Parms;
		Parms.activated=activated ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APalletTracker_EnableSelectedEffectToLocalPlayer),&Parms);
	}
	static FName NAME_APalletTracker_RevealToLocalPlayerBP = FName(TEXT("RevealToLocalPlayerBP"));
	void APalletTracker::RevealToLocalPlayerBP(bool shown)
	{
		PalletTracker_eventRevealToLocalPlayerBP_Parms Parms;
		Parms.shown=shown ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APalletTracker_RevealToLocalPlayerBP),&Parms);
	}
	void APalletTracker::StaticRegisterNativesAPalletTracker()
	{
		UClass* Class = APalletTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSpawnDreamPalletAtLocation", &APalletTracker::execCanSpawnDreamPalletAtLocation },
			{ "InitializeTunableValues", &APalletTracker::execInitializeTunableValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics
	{
		struct PalletTracker_eventCanSpawnDreamPalletAtLocation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PalletTracker_eventCanSpawnDreamPalletAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PalletTracker_eventCanSpawnDreamPalletAtLocation_Parms), &Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APalletTracker, nullptr, "CanSpawnDreamPalletAtLocation", nullptr, nullptr, sizeof(PalletTracker_eventCanSpawnDreamPalletAtLocation_Parms), Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics
	{
		static void NewProp_activated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::NewProp_activated_SetBit(void* Obj)
	{
		((PalletTracker_eventEnableSelectedEffectToLocalPlayer_Parms*)Obj)->activated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::NewProp_activated = { "activated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PalletTracker_eventEnableSelectedEffectToLocalPlayer_Parms), &Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::NewProp_activated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::NewProp_activated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APalletTracker, nullptr, "EnableSelectedEffectToLocalPlayer", nullptr, nullptr, sizeof(PalletTracker_eventEnableSelectedEffectToLocalPlayer_Parms), Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics
	{
		struct PalletTracker_eventInitializeTunableValues_Parms
		{
			ASlasherPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PalletTracker_eventInitializeTunableValues_Parms, slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::NewProp_slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APalletTracker, nullptr, "InitializeTunableValues", nullptr, nullptr, sizeof(PalletTracker_eventInitializeTunableValues_Parms), Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APalletTracker_InitializeTunableValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APalletTracker_InitializeTunableValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics
	{
		static void NewProp_shown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::NewProp_shown_SetBit(void* Obj)
	{
		((PalletTracker_eventRevealToLocalPlayerBP_Parms*)Obj)->shown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::NewProp_shown = { "shown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PalletTracker_eventRevealToLocalPlayerBP_Parms), &Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::NewProp_shown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::NewProp_shown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APalletTracker, nullptr, "RevealToLocalPlayerBP", nullptr, nullptr, sizeof(PalletTracker_eventRevealToLocalPlayerBP_Parms), Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APalletTracker_NoRegister()
	{
		return APalletTracker::StaticClass();
	}
	struct Z_Construct_UClass_APalletTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__indicatorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__indicatorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dreamPallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dreamPallet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__procedurallySpawnedPallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__procedurallySpawnedPallet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APalletTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APalletTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APalletTracker_CanSpawnDreamPalletAtLocation, "CanSpawnDreamPalletAtLocation" }, // 87503426
		{ &Z_Construct_UFunction_APalletTracker_EnableSelectedEffectToLocalPlayer, "EnableSelectedEffectToLocalPlayer" }, // 1102415901
		{ &Z_Construct_UFunction_APalletTracker_InitializeTunableValues, "InitializeTunableValues" }, // 2337848757
		{ &Z_Construct_UFunction_APalletTracker_RevealToLocalPlayerBP, "RevealToLocalPlayerBP" }, // 1684549062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APalletTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PalletTracker.h" },
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APalletTracker_Statics::NewProp__indicatorLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PalletTracker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APalletTracker_Statics::NewProp__indicatorLocation = { "_indicatorLocation", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APalletTracker, _indicatorLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APalletTracker_Statics::NewProp__indicatorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APalletTracker_Statics::NewProp__indicatorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APalletTracker_Statics::NewProp__dreamPallet_MetaData[] = {
		{ "Category", "PalletTracker" },
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APalletTracker_Statics::NewProp__dreamPallet = { "_dreamPallet", nullptr, (EPropertyFlags)0x0010000000002024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APalletTracker, _dreamPallet), Z_Construct_UClass_APallet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APalletTracker_Statics::NewProp__dreamPallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APalletTracker_Statics::NewProp__dreamPallet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APalletTracker_Statics::NewProp__procedurallySpawnedPallet_MetaData[] = {
		{ "Category", "PalletTracker" },
		{ "ModuleRelativePath", "Public/PalletTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APalletTracker_Statics::NewProp__procedurallySpawnedPallet = { "_procedurallySpawnedPallet", nullptr, (EPropertyFlags)0x0010000000002024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APalletTracker, _procedurallySpawnedPallet), Z_Construct_UClass_APallet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APalletTracker_Statics::NewProp__procedurallySpawnedPallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APalletTracker_Statics::NewProp__procedurallySpawnedPallet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APalletTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APalletTracker_Statics::NewProp__indicatorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APalletTracker_Statics::NewProp__dreamPallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APalletTracker_Statics::NewProp__procedurallySpawnedPallet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APalletTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APalletTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APalletTracker_Statics::ClassParams = {
		&APalletTracker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APalletTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APalletTracker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APalletTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APalletTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APalletTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APalletTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APalletTracker, 1885179768);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<APalletTracker>()
	{
		return APalletTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APalletTracker(Z_Construct_UClass_APalletTracker, &APalletTracker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("APalletTracker"), false, nullptr, nullptr, nullptr);

	void APalletTracker::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__procedurallySpawnedPallet(TEXT("_procedurallySpawnedPallet"));
		static const FName Name__dreamPallet(TEXT("_dreamPallet"));

		const bool bIsValid = true
			&& Name__procedurallySpawnedPallet == ClassReps[(int32)ENetFields_Private::_procedurallySpawnedPallet].Property->GetFName()
			&& Name__dreamPallet == ClassReps[(int32)ENetFields_Private::_dreamPallet].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APalletTracker"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APalletTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
