// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaFriendsListScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFriendsListScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaFriendsListScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaFriendsListScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaFriendListScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaFriendsListScreenUMG::execHandleClosedButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleClosedButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaFriendsListScreenUMG::execHandleResearchButtonClicked)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_searchInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleResearchButtonClicked(Z_Param_Out_searchInput);
		P_NATIVE_END;
	}
	void UAtlantaFriendsListScreenUMG::StaticRegisterNativesUAtlantaFriendsListScreenUMG()
	{
		UClass* Class = UAtlantaFriendsListScreenUMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleClosedButtonClicked", &UAtlantaFriendsListScreenUMG::execHandleClosedButtonClicked },
			{ "HandleResearchButtonClicked", &UAtlantaFriendsListScreenUMG::execHandleResearchButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaFriendsListScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaFriendsListScreenUMG, nullptr, "HandleClosedButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics
	{
		struct AtlantaFriendsListScreenUMG_eventHandleResearchButtonClicked_Parms
		{
			FText searchInput;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_searchInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::NewProp_searchInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::NewProp_searchInput = { "searchInput", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaFriendsListScreenUMG_eventHandleResearchButtonClicked_Parms, searchInput), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::NewProp_searchInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::NewProp_searchInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::NewProp_searchInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaFriendsListScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaFriendsListScreenUMG, nullptr, "HandleResearchButtonClicked", nullptr, nullptr, sizeof(AtlantaFriendsListScreenUMG_eventHandleResearchButtonClicked_Parms), Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaFriendsListScreenUMG_NoRegister()
	{
		return UAtlantaFriendsListScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlantaFriendListScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlantaFriendListScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleClosedButtonClicked, "HandleClosedButtonClicked" }, // 2463192683
		{ &Z_Construct_UFunction_UAtlantaFriendsListScreenUMG_HandleResearchButtonClicked, "HandleResearchButtonClicked" }, // 3019793405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaFriendsListScreenUMG.h" },
		{ "ModuleRelativePath", "Public/AtlantaFriendsListScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::NewProp__atlantaFriendListScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaFriendsListScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::NewProp__atlantaFriendListScreen = { "_atlantaFriendListScreen", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaFriendsListScreenUMG, _atlantaFriendListScreen), Z_Construct_UClass_UUMGAtlantaFriendListScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::NewProp__atlantaFriendListScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::NewProp__atlantaFriendListScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::NewProp__atlantaFriendListScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaFriendsListScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::ClassParams = {
		&UAtlantaFriendsListScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaFriendsListScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaFriendsListScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaFriendsListScreenUMG, 4113825070);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaFriendsListScreenUMG>()
	{
		return UAtlantaFriendsListScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaFriendsListScreenUMG(Z_Construct_UClass_UAtlantaFriendsListScreenUMG, &UAtlantaFriendsListScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaFriendsListScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaFriendsListScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
