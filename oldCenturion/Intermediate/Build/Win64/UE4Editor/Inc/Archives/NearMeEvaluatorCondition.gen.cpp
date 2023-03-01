// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/NearMeEvaluatorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearMeEvaluatorCondition() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UNearMeEvaluatorCondition_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UNearMeEvaluatorCondition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UNearMeEvaluatorCondition::StaticRegisterNativesUNearMeEvaluatorCondition()
	{
	}
	UClass* Z_Construct_UClass_UNearMeEvaluatorCondition_NoRegister()
	{
		return UNearMeEvaluatorCondition::StaticClass();
	}
	struct Z_Construct_UClass_UNearMeEvaluatorCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__questOwnerCanBeSubjectOfEvent_MetaData[];
#endif
		static void NewProp__questOwnerCanBeSubjectOfEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__questOwnerCanBeSubjectOfEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NearMeEvaluatorCondition.h" },
		{ "ModuleRelativePath", "Public/NearMeEvaluatorCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::NewProp__questOwnerCanBeSubjectOfEvent_MetaData[] = {
		{ "Category", "NearMeEvaluatorCondition" },
		{ "ModuleRelativePath", "Public/NearMeEvaluatorCondition.h" },
	};
#endif
	void Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::NewProp__questOwnerCanBeSubjectOfEvent_SetBit(void* Obj)
	{
		((UNearMeEvaluatorCondition*)Obj)->_questOwnerCanBeSubjectOfEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::NewProp__questOwnerCanBeSubjectOfEvent = { "_questOwnerCanBeSubjectOfEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNearMeEvaluatorCondition), &Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::NewProp__questOwnerCanBeSubjectOfEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::NewProp__questOwnerCanBeSubjectOfEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::NewProp__questOwnerCanBeSubjectOfEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::NewProp__questOwnerCanBeSubjectOfEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearMeEvaluatorCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::ClassParams = {
		&UNearMeEvaluatorCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearMeEvaluatorCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNearMeEvaluatorCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNearMeEvaluatorCondition, 1489485368);
	template<> ARCHIVES_API UClass* StaticClass<UNearMeEvaluatorCondition>()
	{
		return UNearMeEvaluatorCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNearMeEvaluatorCondition(Z_Construct_UClass_UNearMeEvaluatorCondition, &UNearMeEvaluatorCondition::StaticClass, TEXT("/Script/Archives"), TEXT("UNearMeEvaluatorCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearMeEvaluatorCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
