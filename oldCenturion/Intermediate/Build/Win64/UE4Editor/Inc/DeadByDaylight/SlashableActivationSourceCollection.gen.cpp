// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlashableActivationSourceCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlashableActivationSourceCollection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlashableActivationSourceCollection_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlashableActivationSourceCollection();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USlashableActivationSourceCollection::execAddSource)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlashableActivationSourceCollection::AddSource(Z_Param_source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlashableActivationSourceCollection::execForceActivate)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlashableActivationSourceCollection::ForceActivate(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlashableActivationSourceCollection::execRemoveSource)
	{
		P_GET_OBJECT(UObject,Z_Param_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlashableActivationSourceCollection::RemoveSource(Z_Param_source);
		P_NATIVE_END;
	}
	void USlashableActivationSourceCollection::StaticRegisterNativesUSlashableActivationSourceCollection()
	{
		UClass* Class = USlashableActivationSourceCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSource", &USlashableActivationSourceCollection::execAddSource },
			{ "ForceActivate", &USlashableActivationSourceCollection::execForceActivate },
			{ "RemoveSource", &USlashableActivationSourceCollection::execRemoveSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics
	{
		struct SlashableActivationSourceCollection_eventAddSource_Parms
		{
			UObject* source;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlashableActivationSourceCollection_eventAddSource_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlashableActivationSourceCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlashableActivationSourceCollection, nullptr, "AddSource", nullptr, nullptr, sizeof(SlashableActivationSourceCollection_eventAddSource_Parms), Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics
	{
		struct SlashableActivationSourceCollection_eventForceActivate_Parms
		{
			const UObject* worldContextObject;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlashableActivationSourceCollection_eventForceActivate_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlashableActivationSourceCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlashableActivationSourceCollection, nullptr, "ForceActivate", nullptr, nullptr, sizeof(SlashableActivationSourceCollection_eventForceActivate_Parms), Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics
	{
		struct SlashableActivationSourceCollection_eventRemoveSource_Parms
		{
			UObject* source;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlashableActivationSourceCollection_eventRemoveSource_Parms, source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::NewProp_source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlashableActivationSourceCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlashableActivationSourceCollection, nullptr, "RemoveSource", nullptr, nullptr, sizeof(SlashableActivationSourceCollection_eventRemoveSource_Parms), Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlashableActivationSourceCollection_NoRegister()
	{
		return USlashableActivationSourceCollection::StaticClass();
	}
	struct Z_Construct_UClass_USlashableActivationSourceCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlashableActivationSourceCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlashableActivationSourceCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlashableActivationSourceCollection_AddSource, "AddSource" }, // 371700929
		{ &Z_Construct_UFunction_USlashableActivationSourceCollection_ForceActivate, "ForceActivate" }, // 666251253
		{ &Z_Construct_UFunction_USlashableActivationSourceCollection_RemoveSource, "RemoveSource" }, // 3654377766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlashableActivationSourceCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SlashableActivationSourceCollection.h" },
		{ "ModuleRelativePath", "Public/SlashableActivationSourceCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlashableActivationSourceCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlashableActivationSourceCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlashableActivationSourceCollection_Statics::ClassParams = {
		&USlashableActivationSourceCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlashableActivationSourceCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlashableActivationSourceCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlashableActivationSourceCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlashableActivationSourceCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlashableActivationSourceCollection, 2083734693);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USlashableActivationSourceCollection>()
	{
		return USlashableActivationSourceCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlashableActivationSourceCollection(Z_Construct_UClass_USlashableActivationSourceCollection, &USlashableActivationSourceCollection::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USlashableActivationSourceCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlashableActivationSourceCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
