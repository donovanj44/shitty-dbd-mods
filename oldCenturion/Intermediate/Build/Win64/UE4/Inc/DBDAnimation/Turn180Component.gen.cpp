// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/Turn180Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurn180Component() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UTurn180Component_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UTurn180Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTurn180Settings();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMovementSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTurn180_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTurn180Component::execServer_SetSettings)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_STRUCT(FTurn180Settings,Z_Param_settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSettings_Validate(Z_Param_timestamp,Z_Param_settings))
		{
			RPC_ValidateFailed(TEXT("Server_SetSettings_Validate"));
			return;
		}
		P_THIS->Server_SetSettings_Implementation(Z_Param_timestamp,Z_Param_settings);
		P_NATIVE_END;
	}
	static FName NAME_UTurn180Component_Server_SetSettings = FName(TEXT("Server_SetSettings"));
	void UTurn180Component::Server_SetSettings(float timestamp, const FTurn180Settings settings)
	{
		Turn180Component_eventServer_SetSettings_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.settings=settings;
		ProcessEvent(FindFunctionChecked(NAME_UTurn180Component_Server_SetSettings),&Parms);
	}
	void UTurn180Component::StaticRegisterNativesUTurn180Component()
	{
		UClass* Class = UTurn180Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_SetSettings", &UTurn180Component::execServer_SetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::NewProp_settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Turn180Component_eventServer_SetSettings_Parms, settings), Z_Construct_UScriptStruct_FTurn180Settings, METADATA_PARAMS(Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::NewProp_settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::NewProp_settings_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Turn180Component_eventServer_SetSettings_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Turn180Component.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurn180Component, nullptr, "Server_SetSettings", nullptr, nullptr, sizeof(Turn180Component_eventServer_SetSettings_Parms), Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurn180Component_Server_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTurn180Component_Server_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTurn180Component_NoRegister()
	{
		return UTurn180Component::StaticClass();
	}
	struct Z_Construct_UClass_UTurn180Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurn180Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTurn180Component_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurn180Component_Server_SetSettings, "Server_SetSettings" }, // 1802800731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurn180Component_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Turn180Component.h" },
		{ "ModuleRelativePath", "Public/Turn180Component.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurn180Component_Statics::NewProp__settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Turn180Component.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTurn180Component_Statics::NewProp__settings = { "_settings", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurn180Component, _settings), Z_Construct_UScriptStruct_FTurn180Settings, METADATA_PARAMS(Z_Construct_UClass_UTurn180Component_Statics::NewProp__settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurn180Component_Statics::NewProp__settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurn180Component_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurn180Component_Statics::NewProp__settings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTurn180Component_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovementSettings_NoRegister, (int32)VTABLE_OFFSET(UTurn180Component, IMovementSettings), false },
			{ Z_Construct_UClass_UTurn180_NoRegister, (int32)VTABLE_OFFSET(UTurn180Component, ITurn180), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurn180Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurn180Component>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTurn180Component_Statics::ClassParams = {
		&UTurn180Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTurn180Component_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTurn180Component_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTurn180Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurn180Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurn180Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTurn180Component_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTurn180Component, 364403119);
	template<> DBDANIMATION_API UClass* StaticClass<UTurn180Component>()
	{
		return UTurn180Component::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTurn180Component(Z_Construct_UClass_UTurn180Component, &UTurn180Component::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UTurn180Component"), false, nullptr, nullptr, nullptr);

	void UTurn180Component::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__settings(TEXT("_settings"));

		const bool bIsValid = true
			&& Name__settings == ClassReps[(int32)ENetFields_Private::_settings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTurn180Component"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurn180Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
