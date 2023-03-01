// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/UIInputUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIInputUtilities() {}
// Cross Module References
	DBDINPUT_API UClass* Z_Construct_UClass_UUIInputUtilities_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UUIInputUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EUIActionType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EControlMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUIInputUtilities::execGetKeyFromUIAction)
	{
		P_GET_ENUM(EUIActionType,Z_Param_actionType);
		P_GET_UBOOL(Z_Param_isUsingGamepad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=UUIInputUtilities::GetKeyFromUIAction(EUIActionType(Z_Param_actionType),Z_Param_isUsingGamepad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputUtilities::execIsInputKeyControlModePairValid)
	{
		P_GET_STRUCT(FKey,Z_Param_inputKey);
		P_GET_ENUM(EControlMode,Z_Param_controlMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUIInputUtilities::IsInputKeyControlModePairValid(Z_Param_inputKey,EControlMode(Z_Param_controlMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputUtilities::execShouldUseAtlantaControls)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUIInputUtilities::ShouldUseAtlantaControls(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	void UUIInputUtilities::StaticRegisterNativesUUIInputUtilities()
	{
		UClass* Class = UUIInputUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeyFromUIAction", &UUIInputUtilities::execGetKeyFromUIAction },
			{ "IsInputKeyControlModePairValid", &UUIInputUtilities::execIsInputKeyControlModePairValid },
			{ "ShouldUseAtlantaControls", &UUIInputUtilities::execShouldUseAtlantaControls },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics
	{
		struct UIInputUtilities_eventGetKeyFromUIAction_Parms
		{
			EUIActionType actionType;
			bool isUsingGamepad;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_isUsingGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUsingGamepad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_actionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_actionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputUtilities_eventGetKeyFromUIAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_isUsingGamepad_SetBit(void* Obj)
	{
		((UIInputUtilities_eventGetKeyFromUIAction_Parms*)Obj)->isUsingGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_isUsingGamepad = { "isUsingGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIInputUtilities_eventGetKeyFromUIAction_Parms), &Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_isUsingGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_actionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputUtilities_eventGetKeyFromUIAction_Parms, actionType), Z_Construct_UEnum_DBDInput_EUIActionType, METADATA_PARAMS(Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_actionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_actionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_isUsingGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_actionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::NewProp_actionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputUtilities, nullptr, "GetKeyFromUIAction", nullptr, nullptr, sizeof(UIInputUtilities_eventGetKeyFromUIAction_Parms), Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics
	{
		struct UIInputUtilities_eventIsInputKeyControlModePairValid_Parms
		{
			FKey inputKey;
			EControlMode controlMode;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_controlMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_controlMode_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIInputUtilities_eventIsInputKeyControlModePairValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIInputUtilities_eventIsInputKeyControlModePairValid_Parms), &Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_controlMode = { "controlMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputUtilities_eventIsInputKeyControlModePairValid_Parms, controlMode), Z_Construct_UEnum_DBDSharedTypes_EControlMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_controlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_inputKey = { "inputKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputUtilities_eventIsInputKeyControlModePairValid_Parms, inputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_controlMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_controlMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::NewProp_inputKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputUtilities, nullptr, "IsInputKeyControlModePairValid", nullptr, nullptr, sizeof(UIInputUtilities_eventIsInputKeyControlModePairValid_Parms), Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics
	{
		struct UIInputUtilities_eventShouldUseAtlantaControls_Parms
		{
			const UObject* worldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIInputUtilities_eventShouldUseAtlantaControls_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIInputUtilities_eventShouldUseAtlantaControls_Parms), &Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputUtilities_eventShouldUseAtlantaControls_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputUtilities, nullptr, "ShouldUseAtlantaControls", nullptr, nullptr, sizeof(UIInputUtilities_eventShouldUseAtlantaControls_Parms), Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIInputUtilities_NoRegister()
	{
		return UUIInputUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UUIInputUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIInputUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIInputUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIInputUtilities_GetKeyFromUIAction, "GetKeyFromUIAction" }, // 948020439
		{ &Z_Construct_UFunction_UUIInputUtilities_IsInputKeyControlModePairValid, "IsInputKeyControlModePairValid" }, // 508897793
		{ &Z_Construct_UFunction_UUIInputUtilities_ShouldUseAtlantaControls, "ShouldUseAtlantaControls" }, // 1638473696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIInputUtilities.h" },
		{ "ModuleRelativePath", "Public/UIInputUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIInputUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIInputUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIInputUtilities_Statics::ClassParams = {
		&UUIInputUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIInputUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIInputUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIInputUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIInputUtilities, 2034452912);
	template<> DBDINPUT_API UClass* StaticClass<UUIInputUtilities>()
	{
		return UUIInputUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIInputUtilities(Z_Construct_UClass_UUIInputUtilities, &UUIInputUtilities::StaticClass, TEXT("/Script/DBDInput"), TEXT("UUIInputUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIInputUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
