// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodTrailComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodTrailComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodDecalEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDecalComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodDecal();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBloodTrailComponent::execConditionalStartBleeding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalStartBleeding();
		P_NATIVE_END;
	}
	void UBloodTrailComponent::StaticRegisterNativesUBloodTrailComponent()
	{
		UClass* Class = UBloodTrailComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConditionalStartBleeding", &UBloodTrailComponent::execConditionalStartBleeding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodTrailComponent, nullptr, "ConditionalStartBleeding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodTrailComponent_NoRegister()
	{
		return UBloodTrailComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodTrailComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__decalSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__decalSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodDecalEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodDecalEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__bloodDecals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodDecals_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bloodDecals_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodTrailSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodTrailSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodTrailComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodTrailComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodTrailComponent_ConditionalStartBleeding, "ConditionalStartBleeding" }, // 2858479187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BloodTrailComponent.h" },
		{ "ModuleRelativePath", "Public/BloodTrailComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__decalSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__decalSpawner = { "_decalSpawner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailComponent, _decalSpawner), Z_Construct_UClass_UDecalSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__decalSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__decalSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecalEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecalEffect = { "_bloodDecalEffect", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailComponent, _bloodDecalEffect), Z_Construct_UClass_UBloodDecalEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecalEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecalEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals = { "_bloodDecals", nullptr, (EPropertyFlags)0x0020088000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailComponent, _bloodDecals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals_Key_KeyProp = { "_bloodDecals_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDDecalComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals_ValueProp = { "_bloodDecals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBloodDecal, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodTrailSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodTrailSettings = { "_bloodTrailSettings", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailComponent, _bloodTrailSettings), Z_Construct_UClass_UBloodTrailSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodTrailSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodTrailSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodTrailComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__decalSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecalEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodDecals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailComponent_Statics::NewProp__bloodTrailSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodTrailComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodTrailComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodTrailComponent_Statics::ClassParams = {
		&UBloodTrailComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodTrailComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodTrailComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodTrailComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodTrailComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodTrailComponent, 886560220);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodTrailComponent>()
	{
		return UBloodTrailComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodTrailComponent(Z_Construct_UClass_UBloodTrailComponent, &UBloodTrailComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodTrailComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodTrailComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
