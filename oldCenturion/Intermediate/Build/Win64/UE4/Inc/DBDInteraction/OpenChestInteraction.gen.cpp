// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/OpenChestInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenChestInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UOpenChestInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UOpenChestInteraction();
	DBDINTERACTION_API UClass* Z_Construct_UClass_USearchChestInteractionBase();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UOpenChestInteraction::execCollectItemIfEmptyHanded)
	{
		P_GET_OBJECT(ACollectable,Z_Param_collectable);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectItemIfEmptyHanded(Z_Param_collectable,Z_Param_player);
		P_NATIVE_END;
	}
	void UOpenChestInteraction::StaticRegisterNativesUOpenChestInteraction()
	{
		UClass* Class = UOpenChestInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectItemIfEmptyHanded", &UOpenChestInteraction::execCollectItemIfEmptyHanded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics
	{
		struct OpenChestInteraction_eventCollectItemIfEmptyHanded_Parms
		{
			ACollectable* collectable;
			const ADBDPlayer* player;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collectable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenChestInteraction_eventCollectItemIfEmptyHanded_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::NewProp_collectable = { "collectable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenChestInteraction_eventCollectItemIfEmptyHanded_Parms, collectable), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::NewProp_collectable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenChestInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenChestInteraction, nullptr, "CollectItemIfEmptyHanded", nullptr, nullptr, sizeof(OpenChestInteraction_eventCollectItemIfEmptyHanded_Parms), Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenChestInteraction_NoRegister()
	{
		return UOpenChestInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UOpenChestInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__startTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successExitTimeAnimSequenceReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__successExitTimeAnimSequenceReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperSearchablePercentTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__camperSearchablePercentTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenChestInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USearchChestInteractionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenChestInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenChestInteraction_CollectItemIfEmptyHanded, "CollectItemIfEmptyHanded" }, // 677070880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OpenChestInteraction.h" },
		{ "ModuleRelativePath", "Public/OpenChestInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__startTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenChestInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__startTime = { "_startTime", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenChestInteraction, _startTime), METADATA_PARAMS(Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__startTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__startTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__successExitTimeAnimSequenceReference_MetaData[] = {
		{ "Category", "OpenChestInteraction" },
		{ "ModuleRelativePath", "Public/OpenChestInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__successExitTimeAnimSequenceReference = { "_successExitTimeAnimSequenceReference", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenChestInteraction, _successExitTimeAnimSequenceReference), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__successExitTimeAnimSequenceReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__successExitTimeAnimSequenceReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__camperSearchablePercentTag_MetaData[] = {
		{ "Category", "OpenChestInteraction" },
		{ "ModuleRelativePath", "Public/OpenChestInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__camperSearchablePercentTag = { "_camperSearchablePercentTag", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenChestInteraction, _camperSearchablePercentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__camperSearchablePercentTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__camperSearchablePercentTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenChestInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__startTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__successExitTimeAnimSequenceReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestInteraction_Statics::NewProp__camperSearchablePercentTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenChestInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenChestInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenChestInteraction_Statics::ClassParams = {
		&UOpenChestInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenChestInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenChestInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenChestInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenChestInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenChestInteraction, 3338781056);
	template<> DBDINTERACTION_API UClass* StaticClass<UOpenChestInteraction>()
	{
		return UOpenChestInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenChestInteraction(Z_Construct_UClass_UOpenChestInteraction, &UOpenChestInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UOpenChestInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenChestInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
