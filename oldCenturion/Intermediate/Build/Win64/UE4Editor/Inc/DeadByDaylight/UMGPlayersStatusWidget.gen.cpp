// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPlayersStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPlayersStatusWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayersStatusWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayersStatusWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerStatusIcon_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPlayersStatusWidget::execOnPlayerStatusClicked)
	{
		P_GET_OBJECT(UUMGPlayerStatusIcon,Z_Param_playerStatusIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStatusClicked(Z_Param_playerStatusIcon);
		P_NATIVE_END;
	}
	void UUMGPlayersStatusWidget::StaticRegisterNativesUUMGPlayersStatusWidget()
	{
		UClass* Class = UUMGPlayersStatusWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerStatusClicked", &UUMGPlayersStatusWidget::execOnPlayerStatusClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics
	{
		struct UMGPlayersStatusWidget_eventOnPlayerStatusClicked_Parms
		{
			UUMGPlayerStatusIcon* playerStatusIcon;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerStatusIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerStatusIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::NewProp_playerStatusIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::NewProp_playerStatusIcon = { "playerStatusIcon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayersStatusWidget_eventOnPlayerStatusClicked_Parms, playerStatusIcon), Z_Construct_UClass_UUMGPlayerStatusIcon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::NewProp_playerStatusIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::NewProp_playerStatusIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::NewProp_playerStatusIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPlayersStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPlayersStatusWidget, nullptr, "OnPlayerStatusClicked", nullptr, nullptr, sizeof(UMGPlayersStatusWidget_eventOnPlayerStatusClicked_Parms), Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPlayersStatusWidget_NoRegister()
	{
		return UUMGPlayersStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPlayersStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIconsByName_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_playerIconsByName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerIconsByName_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerIconsByName_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playersContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playersContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatusIconClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_PlayerStatusIconClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedHudWrapperIdMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CustomizedHudWrapperIdMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CustomizedHudWrapperIdMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomizedHudWrapperIdMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizedHudWrapperIdMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPlayersStatusWidget_OnPlayerStatusClicked, "OnPlayerStatusClicked" }, // 3782901194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPlayersStatusWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPlayersStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayersStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName = { "playerIconsByName", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayersStatusWidget, playerIconsByName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName_Key_KeyProp = { "playerIconsByName_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName_ValueProp = { "playerIconsByName", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUMGPlayerStatusIcon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playersContainer_MetaData[] = {
		{ "Category", "UMGPlayersStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayersStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playersContainer = { "playersContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayersStatusWidget, playersContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playersContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playersContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_PlayerStatusIconClass_MetaData[] = {
		{ "Category", "UMGPlayersStatusWidget" },
		{ "ModuleRelativePath", "Public/UMGPlayersStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_PlayerStatusIconClass = { "PlayerStatusIconClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayersStatusWidget, PlayerStatusIconClass), Z_Construct_UClass_UUMGPlayerStatusIcon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_PlayerStatusIconClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_PlayerStatusIconClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_MetaData[] = {
		{ "Category", "UMGPlayersStatusWidget" },
		{ "ModuleRelativePath", "Public/UMGPlayersStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap = { "CustomizedHudWrapperIdMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayersStatusWidget, CustomizedHudWrapperIdMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_Key_KeyProp = { "CustomizedHudWrapperIdMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_ValueProp = { "CustomizedHudWrapperIdMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCustomizedHudPlayerWrapperIdMapContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playerIconsByName_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_playersContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_PlayerStatusIconClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::NewProp_CustomizedHudWrapperIdMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPlayersStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::ClassParams = {
		&UUMGPlayersStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPlayersStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPlayersStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPlayersStatusWidget, 3931177979);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPlayersStatusWidget>()
	{
		return UUMGPlayersStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPlayersStatusWidget(Z_Construct_UClass_UUMGPlayersStatusWidget, &UUMGPlayersStatusWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPlayersStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPlayersStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
