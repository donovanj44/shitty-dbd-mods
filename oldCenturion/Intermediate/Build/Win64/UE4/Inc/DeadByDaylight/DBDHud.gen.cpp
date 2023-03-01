// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDHud() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHud();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStatusView_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDHud::execRemoveStatusViewOnDestroy)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStatusViewOnDestroy(Z_Param_actor);
		P_NATIVE_END;
	}
	void UDBDHud::StaticRegisterNativesUDBDHud()
	{
		UClass* Class = UDBDHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveStatusViewOnDestroy", &UDBDHud::execRemoveStatusViewOnDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics
	{
		struct DBDHud_eventRemoveStatusViewOnDestroy_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDHud_eventRemoveStatusViewOnDestroy_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDHud, nullptr, "RemoveStatusViewOnDestroy", nullptr, nullptr, sizeof(DBDHud_eventRemoveStatusViewOnDestroy_Parms), Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDHud_NoRegister()
	{
		return UDBDHud::StaticClass();
	}
	struct Z_Construct_UClass_UDBDHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusViews_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__statusViews;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusViews_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusViews_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDHud_RemoveStatusViewOnDestroy, "RemoveStatusViewOnDestroy" }, // 3205129423
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDHud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDHud.h" },
		{ "ModuleRelativePath", "Public/DBDHud.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDHud.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews = { "_statusViews", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDHud, _statusViews), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews_Key_KeyProp = { "_statusViews_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews_ValueProp = { "_statusViews", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AStatusView_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDHud_Statics::NewProp__statusViews_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDHud_Statics::ClassParams = {
		&UDBDHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDHud_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDHud, 4098428709);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDHud>()
	{
		return UDBDHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDHud(Z_Construct_UClass_UDBDHud, &UDBDHud::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
