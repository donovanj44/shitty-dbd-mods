// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtilities/Public/PropertyParser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyParser() {}
// Cross Module References
	COREUTILITIES_API UClass* Z_Construct_UClass_UPropertyParser_NoRegister();
	COREUTILITIES_API UClass* Z_Construct_UClass_UPropertyParser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CoreUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPropertyParser::execCopyProperties)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_dest);
		P_GET_OBJECT(UActorComponent,Z_Param_origin);
		P_GET_UBOOL(Z_Param_copyTransform);
		P_GET_TARRAY(FName,Z_Param_propertiesToExclude);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPropertyParser::CopyProperties(Z_Param_dest,Z_Param_origin,Z_Param_copyTransform,Z_Param_propertiesToExclude);
		P_NATIVE_END;
	}
	void UPropertyParser::StaticRegisterNativesUPropertyParser()
	{
		UClass* Class = UPropertyParser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyProperties", &UPropertyParser::execCopyProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics
	{
		struct PropertyParser_eventCopyProperties_Parms
		{
			UActorComponent* dest;
			const UActorComponent* origin;
			bool copyTransform;
			TArray<FName> propertiesToExclude;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_propertiesToExclude;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_propertiesToExclude_Inner;
		static void NewProp_copyTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_copyTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_propertiesToExclude = { "propertiesToExclude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PropertyParser_eventCopyProperties_Parms, propertiesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_propertiesToExclude_Inner = { "propertiesToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_copyTransform_SetBit(void* Obj)
	{
		((PropertyParser_eventCopyProperties_Parms*)Obj)->copyTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_copyTransform = { "copyTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PropertyParser_eventCopyProperties_Parms), &Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_copyTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_origin_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PropertyParser_eventCopyProperties_Parms, origin), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_dest_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_dest = { "dest", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PropertyParser_eventCopyProperties_Parms, dest), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_dest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_dest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_propertiesToExclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_propertiesToExclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_copyTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::NewProp_dest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyParser, nullptr, "CopyProperties", nullptr, nullptr, sizeof(PropertyParser_eventCopyProperties_Parms), Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPropertyParser_CopyProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPropertyParser_CopyProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPropertyParser_NoRegister()
	{
		return UPropertyParser::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyParser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyParser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CoreUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPropertyParser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPropertyParser_CopyProperties, "CopyProperties" }, // 4018290406
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyParser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PropertyParser.h" },
		{ "ModuleRelativePath", "Public/PropertyParser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyParser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyParser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyParser_Statics::ClassParams = {
		&UPropertyParser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyParser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyParser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyParser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyParser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyParser, 1677840950);
	template<> COREUTILITIES_API UClass* StaticClass<UPropertyParser>()
	{
		return UPropertyParser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyParser(Z_Construct_UClass_UPropertyParser, &UPropertyParser::StaticClass, TEXT("/Script/CoreUtilities"), TEXT("UPropertyParser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyParser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
