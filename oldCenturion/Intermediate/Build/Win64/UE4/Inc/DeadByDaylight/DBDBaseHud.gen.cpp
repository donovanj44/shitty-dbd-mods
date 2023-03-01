// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBaseHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBaseHud() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDBaseHud::execDBD_ShowAnimHud)
	{
		P_GET_UBOOL(Z_Param_show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ShowAnimHud(Z_Param_show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDBaseHud::execShouldDrawAnimHud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldDrawAnimHud();
		P_NATIVE_END;
	}
	static FName NAME_ADBDBaseHud_ShowAnimHudBP = FName(TEXT("ShowAnimHudBP"));
	void ADBDBaseHud::ShowAnimHudBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDBaseHud_ShowAnimHudBP),NULL);
	}
	void ADBDBaseHud::StaticRegisterNativesADBDBaseHud()
	{
		UClass* Class = ADBDBaseHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_ShowAnimHud", &ADBDBaseHud::execDBD_ShowAnimHud },
			{ "ShouldDrawAnimHud", &ADBDBaseHud::execShouldDrawAnimHud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics
	{
		struct DBDBaseHud_eventDBD_ShowAnimHud_Parms
		{
			bool show;
		};
		static void NewProp_show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::NewProp_show_SetBit(void* Obj)
	{
		((DBDBaseHud_eventDBD_ShowAnimHud_Parms*)Obj)->show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDBaseHud_eventDBD_ShowAnimHud_Parms), &Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::NewProp_show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::NewProp_show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBaseHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBaseHud, nullptr, "DBD_ShowAnimHud", nullptr, nullptr, sizeof(DBDBaseHud_eventDBD_ShowAnimHud_Parms), Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics
	{
		struct DBDBaseHud_eventShouldDrawAnimHud_Parms
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
	void Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDBaseHud_eventShouldDrawAnimHud_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDBaseHud_eventShouldDrawAnimHud_Parms), &Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBaseHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBaseHud, nullptr, "ShouldDrawAnimHud", nullptr, nullptr, sizeof(DBDBaseHud_eventShouldDrawAnimHud_Parms), Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBaseHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDBaseHud, nullptr, "ShowAnimHudBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDBaseHud_NoRegister()
	{
		return ADBDBaseHud::StaticClass();
	}
	struct Z_Construct_UClass_ADBDBaseHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__debugFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDBaseHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDBaseHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDBaseHud_DBD_ShowAnimHud, "DBD_ShowAnimHud" }, // 4183324784
		{ &Z_Construct_UFunction_ADBDBaseHud_ShouldDrawAnimHud, "ShouldDrawAnimHud" }, // 546408618
		{ &Z_Construct_UFunction_ADBDBaseHud_ShowAnimHudBP, "ShowAnimHudBP" }, // 4008518080
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DBDBaseHud.h" },
		{ "ModuleRelativePath", "Public/DBDBaseHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseHud_Statics::NewProp__debugFont_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBaseHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDBaseHud_Statics::NewProp__debugFont = { "_debugFont", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBaseHud, _debugFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDBaseHud_Statics::NewProp__debugFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseHud_Statics::NewProp__debugFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDBaseHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBaseHud_Statics::NewProp__debugFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDBaseHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDBaseHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDBaseHud_Statics::ClassParams = {
		&ADBDBaseHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDBaseHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDBaseHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDBaseHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDBaseHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDBaseHud, 3637320241);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDBaseHud>()
	{
		return ADBDBaseHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDBaseHud(Z_Construct_UClass_ADBDBaseHud, &ADBDBaseHud::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDBaseHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDBaseHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
