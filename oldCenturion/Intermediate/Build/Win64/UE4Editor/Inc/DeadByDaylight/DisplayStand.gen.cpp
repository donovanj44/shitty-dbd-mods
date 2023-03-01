// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DisplayStand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStand() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADisplayStand_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADisplayStand();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDropdown();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharm_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ADisplayStand::execOnCurrentActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_destroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentActorDestroyed(Z_Param_destroyedActor);
		P_NATIVE_END;
	}
	void ADisplayStand::StaticRegisterNativesADisplayStand()
	{
		UClass* Class = ADisplayStand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCurrentActorDestroyed", &ADisplayStand::execOnCurrentActorDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics
	{
		struct DisplayStand_eventOnCurrentActorDestroyed_Parms
		{
			AActor* destroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DisplayStand_eventOnCurrentActorDestroyed_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayStand, nullptr, "OnCurrentActorDestroyed", nullptr, nullptr, sizeof(DisplayStand_eventOnCurrentActorDestroyed_Parms), Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADisplayStand_NoRegister()
	{
		return ADisplayStand::StaticClass();
	}
	struct Z_Construct_UClass_ADisplayStand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterDropdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__characterDropdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayDummyCharacter_MetaData[];
#endif
		static void NewProp__displayDummyCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayDummyCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useOffsetMenuAnimations_MetaData[];
#endif
		static void NewProp__useOffsetMenuAnimations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useOffsetMenuAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultCharmClassDisplayable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__defaultCharmClassDisplayable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__enableRotationByClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__enableRotationByClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__enableRotationByClass_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__enableRotationByClass_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offsetByClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__offsetByClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__offsetByClass_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__offsetByClass_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextActorToDisplayClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__nextActorToDisplayClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentActorDisplayedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__currentActorDisplayedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentActorDisplayed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentActorDisplayed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisplayStand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADisplayStand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADisplayStand_OnCurrentActorDestroyed, "OnCurrentActorDestroyed" }, // 186336579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayStand.h" },
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__characterDropdown_MetaData[] = {
		{ "Category", "DisplayStand" },
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__characterDropdown = { "_characterDropdown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisplayStand, _characterDropdown), Z_Construct_UScriptStruct_FCharacterDropdown, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__characterDropdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__characterDropdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__displayDummyCharacter_MetaData[] = {
		{ "Category", "DisplayStand" },
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	void Z_Construct_UClass_ADisplayStand_Statics::NewProp__displayDummyCharacter_SetBit(void* Obj)
	{
		((ADisplayStand*)Obj)->_displayDummyCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__displayDummyCharacter = { "_displayDummyCharacter", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADisplayStand), &Z_Construct_UClass_ADisplayStand_Statics::NewProp__displayDummyCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__displayDummyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__displayDummyCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__useOffsetMenuAnimations_MetaData[] = {
		{ "Category", "DisplayStand" },
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	void Z_Construct_UClass_ADisplayStand_Statics::NewProp__useOffsetMenuAnimations_SetBit(void* Obj)
	{
		((ADisplayStand*)Obj)->_useOffsetMenuAnimations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__useOffsetMenuAnimations = { "_useOffsetMenuAnimations", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADisplayStand), &Z_Construct_UClass_ADisplayStand_Statics::NewProp__useOffsetMenuAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__useOffsetMenuAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__useOffsetMenuAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__defaultCharmClassDisplayable_MetaData[] = {
		{ "Category", "DisplayStand" },
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__defaultCharmClassDisplayable = { "_defaultCharmClassDisplayable", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisplayStand, _defaultCharmClassDisplayable), Z_Construct_UClass_ACharm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__defaultCharmClassDisplayable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__defaultCharmClassDisplayable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass_MetaData[] = {
		{ "Category", "DisplayStand" },
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass = { "_enableRotationByClass", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisplayStand, _enableRotationByClass), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass_Key_KeyProp = { "_enableRotationByClass_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass_ValueProp = { "_enableRotationByClass", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass_MetaData[] = {
		{ "Category", "DisplayStand" },
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass = { "_offsetByClass", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisplayStand, _offsetByClass), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass_Key_KeyProp = { "_offsetByClass_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass_ValueProp = { "_offsetByClass", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__nextActorToDisplayClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__nextActorToDisplayClass = { "_nextActorToDisplayClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisplayStand, _nextActorToDisplayClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__nextActorToDisplayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__nextActorToDisplayClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayedClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayedClass = { "_currentActorDisplayedClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisplayStand, _currentActorDisplayedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayed = { "_currentActorDisplayed", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisplayStand, _currentActorDisplayed), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisplayStand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__characterDropdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__displayDummyCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__useOffsetMenuAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__defaultCharmClassDisplayable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__enableRotationByClass_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__offsetByClass_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__nextActorToDisplayClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayStand_Statics::NewProp__currentActorDisplayed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisplayStand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisplayStand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisplayStand_Statics::ClassParams = {
		&ADisplayStand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADisplayStand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisplayStand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisplayStand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisplayStand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisplayStand, 1827104729);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADisplayStand>()
	{
		return ADisplayStand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisplayStand(Z_Construct_UClass_ADisplayStand, &ADisplayStand::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADisplayStand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisplayStand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
