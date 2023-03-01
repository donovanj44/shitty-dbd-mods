// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OngoingGameEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOngoingGameEvent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOngoingGameEvent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOngoingGameEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
// End Cross Module References
	void UOngoingGameEvent::StaticRegisterNativesUOngoingGameEvent()
	{
	}
	UClass* Z_Construct_UClass_UOngoingGameEvent_NoRegister()
	{
		return UOngoingGameEvent::StaticClass();
	}
	struct Z_Construct_UClass_UOngoingGameEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__eventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOngoingGameEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOngoingGameEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OngoingGameEvent.h" },
		{ "ModuleRelativePath", "Public/OngoingGameEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOngoingGameEvent_Statics::NewProp__eventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OngoingGameEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOngoingGameEvent_Statics::NewProp__eventData = { "_eventData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOngoingGameEvent, _eventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UClass_UOngoingGameEvent_Statics::NewProp__eventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOngoingGameEvent_Statics::NewProp__eventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOngoingGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOngoingGameEvent_Statics::NewProp__eventData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOngoingGameEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOngoingGameEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOngoingGameEvent_Statics::ClassParams = {
		&UOngoingGameEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOngoingGameEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOngoingGameEvent_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOngoingGameEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOngoingGameEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOngoingGameEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOngoingGameEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOngoingGameEvent, 1644537150);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOngoingGameEvent>()
	{
		return UOngoingGameEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOngoingGameEvent(Z_Construct_UClass_UOngoingGameEvent, &UOngoingGameEvent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOngoingGameEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOngoingGameEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
