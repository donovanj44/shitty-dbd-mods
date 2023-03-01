// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Hoarder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoarder() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UHoarder_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UHoarder();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THETWINS_API UEnum* Z_Construct_UEnum_TheTwins_EPerkInteractionObjectType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASearchable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHoarder::execGetBubbleIndicatorLifetime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBubbleIndicatorLifetime();
		P_NATIVE_END;
	}
	static FName NAME_UHoarder_Local_ThrowBubbleIndicator = FName(TEXT("Local_ThrowBubbleIndicator"));
	void UHoarder::Local_ThrowBubbleIndicator(const EPerkInteractionObjectType camperInteractionType, const AActor* objectActor, const ACamperPlayer* interactingCamperPlayer)
	{
		Hoarder_eventLocal_ThrowBubbleIndicator_Parms Parms;
		Parms.camperInteractionType=camperInteractionType;
		Parms.objectActor=objectActor;
		Parms.interactingCamperPlayer=interactingCamperPlayer;
		ProcessEvent(FindFunctionChecked(NAME_UHoarder_Local_ThrowBubbleIndicator),&Parms);
	}
	void UHoarder::StaticRegisterNativesUHoarder()
	{
		UClass* Class = UHoarder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBubbleIndicatorLifetime", &UHoarder::execGetBubbleIndicatorLifetime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics
	{
		struct Hoarder_eventGetBubbleIndicatorLifetime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hoarder_eventGetBubbleIndicatorLifetime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoarder, nullptr, "GetBubbleIndicatorLifetime", nullptr, nullptr, sizeof(Hoarder_eventGetBubbleIndicatorLifetime_Parms), Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactingCamperPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingCamperPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camperInteractionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_camperInteractionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_camperInteractionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_interactingCamperPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_interactingCamperPlayer = { "interactingCamperPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hoarder_eventLocal_ThrowBubbleIndicator_Parms, interactingCamperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_interactingCamperPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_interactingCamperPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_objectActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_objectActor = { "objectActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hoarder_eventLocal_ThrowBubbleIndicator_Parms, objectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_objectActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_objectActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_camperInteractionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_camperInteractionType = { "camperInteractionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hoarder_eventLocal_ThrowBubbleIndicator_Parms, camperInteractionType), Z_Construct_UEnum_TheTwins_EPerkInteractionObjectType, METADATA_PARAMS(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_camperInteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_camperInteractionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_camperInteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_interactingCamperPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_objectActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_camperInteractionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::NewProp_camperInteractionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoarder, nullptr, "Local_ThrowBubbleIndicator", nullptr, nullptr, sizeof(Hoarder_eventLocal_ThrowBubbleIndicator_Parms), Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoarder_NoRegister()
	{
		return UHoarder::StaticClass();
	}
	struct Z_Construct_UClass_UHoarder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showUniqueChestVisualPerState_MetaData[];
#endif
		static void NewProp__showUniqueChestVisualPerState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showUniqueChestVisualPerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bubbleIndicatorLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__bubbleIndicatorLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__extraChestsSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__extraChestsSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperInteractItemPickupRevealRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__camperInteractItemPickupRevealRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chests;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chests_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoarder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoarder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoarder_GetBubbleIndicatorLifetime, "GetBubbleIndicatorLifetime" }, // 2463491019
		{ &Z_Construct_UFunction_UHoarder_Local_ThrowBubbleIndicator, "Local_ThrowBubbleIndicator" }, // 2942102810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoarder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hoarder.h" },
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoarder_Statics::NewProp__showUniqueChestVisualPerState_MetaData[] = {
		{ "Category", "Hoarder" },
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
	void Z_Construct_UClass_UHoarder_Statics::NewProp__showUniqueChestVisualPerState_SetBit(void* Obj)
	{
		((UHoarder*)Obj)->_showUniqueChestVisualPerState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoarder_Statics::NewProp__showUniqueChestVisualPerState = { "_showUniqueChestVisualPerState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoarder), &Z_Construct_UClass_UHoarder_Statics::NewProp__showUniqueChestVisualPerState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoarder_Statics::NewProp__showUniqueChestVisualPerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoarder_Statics::NewProp__showUniqueChestVisualPerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoarder_Statics::NewProp__bubbleIndicatorLifetime_MetaData[] = {
		{ "Category", "Hoarder" },
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoarder_Statics::NewProp__bubbleIndicatorLifetime = { "_bubbleIndicatorLifetime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_bubbleIndicatorLifetime, UHoarder), STRUCT_OFFSET(UHoarder, _bubbleIndicatorLifetime), METADATA_PARAMS(Z_Construct_UClass_UHoarder_Statics::NewProp__bubbleIndicatorLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoarder_Statics::NewProp__bubbleIndicatorLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoarder_Statics::NewProp__extraChestsSpawned_MetaData[] = {
		{ "Category", "Hoarder" },
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoarder_Statics::NewProp__extraChestsSpawned = { "_extraChestsSpawned", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_extraChestsSpawned, UHoarder), STRUCT_OFFSET(UHoarder, _extraChestsSpawned), METADATA_PARAMS(Z_Construct_UClass_UHoarder_Statics::NewProp__extraChestsSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoarder_Statics::NewProp__extraChestsSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoarder_Statics::NewProp__camperInteractItemPickupRevealRange_MetaData[] = {
		{ "Category", "Hoarder" },
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoarder_Statics::NewProp__camperInteractItemPickupRevealRange = { "_camperInteractItemPickupRevealRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_camperInteractItemPickupRevealRange, UHoarder), STRUCT_OFFSET(UHoarder, _camperInteractItemPickupRevealRange), METADATA_PARAMS(Z_Construct_UClass_UHoarder_Statics::NewProp__camperInteractItemPickupRevealRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoarder_Statics::NewProp__camperInteractItemPickupRevealRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoarder_Statics::NewProp__chests_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hoarder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoarder_Statics::NewProp__chests = { "_chests", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoarder, _chests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoarder_Statics::NewProp__chests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoarder_Statics::NewProp__chests_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoarder_Statics::NewProp__chests_Inner = { "_chests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASearchable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoarder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoarder_Statics::NewProp__showUniqueChestVisualPerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoarder_Statics::NewProp__bubbleIndicatorLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoarder_Statics::NewProp__extraChestsSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoarder_Statics::NewProp__camperInteractItemPickupRevealRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoarder_Statics::NewProp__chests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoarder_Statics::NewProp__chests_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoarder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoarder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoarder_Statics::ClassParams = {
		&UHoarder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoarder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoarder_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoarder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoarder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoarder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoarder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoarder, 1568200786);
	template<> THETWINS_API UClass* StaticClass<UHoarder>()
	{
		return UHoarder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoarder(Z_Construct_UClass_UHoarder, &UHoarder::StaticClass, TEXT("/Script/TheTwins"), TEXT("UHoarder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoarder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
